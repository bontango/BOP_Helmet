/* 
 * File:   main.c
 * Author: th
 * BOP_HELMET
 * PIC18F25K42
 * READ Port / Write LAT
 * MCC Version
 * v100 initial version for Hardware 2.x
 * v101
 * corrected LED order
 * TMR4 is now low INT
 * added casting for bit macros
 * added Blinkcode to show Versiom at start
 * v102
 * corrected Data signaling
 * v103 
 * changed blinkcode
 * 
 *  */

#include "mcc_generated_files/mcc.h"
#include <string.h>
#include <stdio.h>

//supress 'never called' warnings
#pragma warning disable 520

//Version for Blink Code
#define VERSION "103" // FW Version string (three numbers as char e.g '100')

#define MODE_TEST 1
#define MODE_RUN 0

//Fading
#define FAD_T_O 3  //ON ON no fading
#define FAD_T_1 40 //ON OFF less fading
#define FAD_T_2 80 //OFF ON more fading
#define FAD_T_3 60   //OFF OFF default

//some bit settings routines
//postion(pos) goes from 0
#define CHECK_BIT(var, pos)   ((var) & (1u << (pos)))
#define SET_BIT(var, pos)     var |= (1u << pos)
#define CLEAR_BIT(var, pos)   var &= (~(1u << pos))
#define TOGGLE_BIT(var, pos)  var ^= (1u << pos)
    
    
//global vars, used in most routines

volatile uint16_t lampdata; //data get from pinball
volatile uint16_t lampstatus; //'buffered' status
volatile uint16_t pwm_setting[16];     //PWM setting
volatile uint8_t pwm_phase[16];     //PWM phase for each IO (32 possible)
const uint16_t pwm_table[32] =
{
    0, 1, 2, 2, 2, 3, 3, 4, 5, 6, 7, 8, 10, 11, 13, 16, 19, 23,
    27, 32, 38, 45, 54, 64, 76, 91, 108, 128, 152, 181, 215, 255
};

volatile int clocks_counter;
volatile int old_clocks_counter;

// RB1 / clock
//read data from pinball
void my_Int1_Isr(void)    {
            
  //shift current data
  lampdata = ( lampdata << 1);
  
  //read new data, assign to bit0
  if (DATA_GetValue() == 0)
      CLEAR_BIT(lampdata,0);
  else
      SET_BIT(lampdata,0);
    
  // increment clocks counter
  clocks_counter++;
  //signaling
  LED1_SetHigh();

   
}

// interrupt timer for checking clocks
//called each 20ms
//if clocks_counter is unchanged between calls
//we assume data is stable and change status
void my_antiflicker_isr(void)    {
    
    //changes in between calls?
    if ( clocks_counter == old_clocks_counter ) {
        //assign new values
        lampstatus = lampdata;        
        //reset counters
        clocks_counter = old_clocks_counter = 0;  
        //end signaling
        LED1_SetLow();
    }
    else
    {
       old_clocks_counter =  clocks_counter;        
    }        
}

// interrupt timer for fading
//called each 128 uS multiplied with value of PR4
// 40 -> each 5,12mS -> x32 = 163mS fading
// 60 -> each 7,68mS -> x32 = 245mS fading
// 80 -> each 10,24mS -> x32 = 327mS fading
void my_fading_isr(void)    {
    
    uint8_t io;
    //phases 0..31 according to pwm_table
    //pwm_phase[IO] == 0 is OFF
    //pwm_phase[IO] == 31 is ON      
    
    for (io=0; io<=15; io++) {
        //lamp off & pwm phase not 0    
        if ( CHECK_BIT(lampstatus,io) == 0) {
            if  (pwm_phase[io] != 0) {
            --pwm_phase[io]; //decrement phase for this IO
            pwm_setting[io] = pwm_table[pwm_phase[io]];                                
            }
        }
        else { //lamp ON & pwm phase not 255
            if  (pwm_phase[io] != 31) {
            ++pwm_phase[io]; //increment phase for this IO
            pwm_setting[io] = pwm_table[pwm_phase[io]];                                
            }                
        }
    } //for    
}

// interrupt timer for Soft PWM
//called each 40us
void my_pwm_isr(void)    {
    
    static uint8_t pwm_cnt=0;
    uint8_t tmp1 = 0;
    uint8_t tmp2 = 0;
    
    //PWM
    //PORTA
    if (pwm_setting[0] > pwm_cnt) tmp1 |= (1<<0);
    if (pwm_setting[1] > pwm_cnt) tmp1 |= (1<<1);
    if (pwm_setting[2] > pwm_cnt) tmp1 |= (1<<2);
    if (pwm_setting[3] > pwm_cnt) tmp1 |= (1<<3);
    if (pwm_setting[4] > pwm_cnt) tmp1 |= (1<<4);
    if (pwm_setting[5] > pwm_cnt) tmp1 |= (1<<5);
    if (pwm_setting[6] > pwm_cnt) tmp1 |= (1<<6);
    if (pwm_setting[7] > pwm_cnt) tmp1 |= (1<<7);
    //PORTC    
    if (pwm_setting[8] > pwm_cnt) tmp2 |= (1<<0);
    if (pwm_setting[9] > pwm_cnt) tmp2 |= (1<<1);
    if (pwm_setting[10] > pwm_cnt) tmp2 |= (1<<2);
    if (pwm_setting[11] > pwm_cnt) tmp2 |= (1<<3);
    if (pwm_setting[12] > pwm_cnt) tmp2 |= (1<<4);
    if (pwm_setting[13] > pwm_cnt) tmp2 |= (1<<5);
    if (pwm_setting[14] > pwm_cnt) tmp2 |= (1<<6);
    if (pwm_setting[15] > pwm_cnt) tmp2 |= (1<<7);
    
    LATA = tmp1;
    LATC = tmp2;

    if (pwm_cnt==254)
        pwm_cnt=0;
    else
        pwm_cnt++;            
    
}



//big delay val * 100mS
void my_delay( int val) {
    int i;
        
    for( i=0; i<=val; i++) 
    {
        __delay_ms(100);  
    }
    
}    

// FW version blinking
static void blinkFw(char* version)
{
uint8_t pos, nval, blink, pause;
my_delay(7);
for (pos = 0; pos < 3; pos++) {
nval = version[pos] - '0';
if (nval) {
for (blink = 0; blink < nval; blink++)
{
LED2_SetHigh(); // if '1'-'9', then D1 flashes x times
my_delay(1);
LED2_SetLow(); // LED2 OFF (D1)
my_delay(1);
}
pause = 10 - nval;
my_delay(pause);
}
else {
LED1_SetHigh(); // if '0', then D2 flashes 1 time
my_delay(1);
LED1_SetLow(); // LED1 OFF (D2)
my_delay(9);
}
}
my_delay(9);
}

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // Enable high priority global interrupts
    INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    INTERRUPT_GlobalInterruptLowEnable();
    
    //set my interrupts
    INT1_SetInterruptHandler(my_Int1_Isr);
    TMR0_SetInterruptHandler(my_antiflicker_isr);    
    TMR2_SetInterruptHandler(my_pwm_isr);
    TMR4_SetInterruptHandler(my_fading_isr);
    
          
uint8_t i,fading_level;
uint8_t mode = MODE_RUN;

//init
for( i=0; i<=15; i++) pwm_setting[i] =0;
lampdata = lampstatus = 0;
clocks_counter = old_clocks_counter = 0;

//wait a bit before running
for( i=0; i<5; i++) {
    LED2_SetHigh(); LED1_SetHigh();
    my_delay(1);
    LED2_SetLow(); LED1_SetLow();
    my_delay(1);    
}

//Version as Blinkcode
blinkFw(VERSION);

//ON indicator
LED2_SetHigh();

//enable interrupts
ei();
     
 while(1)  { 
     
     //fading control
     fading_level = DIP1_GetValue() + DIP2_GetValue() + DIP2_GetValue();     
     switch(fading_level) {
         case 3: TMR4_Period8BitSet(FAD_T_3); //minimum/no fade OFF OFF
                 break;
         case 2: TMR4_Period8BitSet(FAD_T_2); // ON OFF
                 break;
         case 1: TMR4_Period8BitSet(FAD_T_1); //OFF ON
                 break;
         case 0: TMR4_Period8BitSet(FAD_T_O); //ON ON
                 break;                  
     }
     
     if ( SW1_GetValue() == 0) { mode = MODE_TEST; }
     
     if ( mode == MODE_RUN ) {
              
     }
     else { //MODE Test
         //disable some interrupts
         EXT_INT1_InterruptDisable();
         TMR0_StopTimer();
         //all lamps OFF
         lampstatus = 0;
         for ( i=0; i<=15; i++) {
             SET_BIT( lampstatus, i);
             my_delay(2);
             //check SW2 (opt switch)
             if ( SW2_GetValue() == 0) {
                 mode = MODE_RUN;
                 break;
                }
             lampstatus = 0;                                  
             if ( LED1_GetValue() == 0) LED1_SetHigh(); else LED1_SetLow();
            }
         if ( mode == MODE_RUN ) {
            EXT_INT1_InterruptEnable();
            TMR0_StartTimer();
            LED1_SetLow();
             }
         }     
 }//endless loop
}//main
