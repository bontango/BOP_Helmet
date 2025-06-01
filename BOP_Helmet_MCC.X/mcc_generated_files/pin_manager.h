/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F25K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LAMP1 aliases
#define LAMP1_TRIS                 TRISAbits.TRISA0
#define LAMP1_LAT                  LATAbits.LATA0
#define LAMP1_PORT                 PORTAbits.RA0
#define LAMP1_WPU                  WPUAbits.WPUA0
#define LAMP1_OD                   ODCONAbits.ODCA0
#define LAMP1_ANS                  ANSELAbits.ANSELA0
#define LAMP1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LAMP1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LAMP1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LAMP1_GetValue()           PORTAbits.RA0
#define LAMP1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LAMP1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LAMP1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LAMP1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LAMP1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LAMP1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LAMP1_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define LAMP1_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set LAMP2 aliases
#define LAMP2_TRIS                 TRISAbits.TRISA1
#define LAMP2_LAT                  LATAbits.LATA1
#define LAMP2_PORT                 PORTAbits.RA1
#define LAMP2_WPU                  WPUAbits.WPUA1
#define LAMP2_OD                   ODCONAbits.ODCA1
#define LAMP2_ANS                  ANSELAbits.ANSELA1
#define LAMP2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LAMP2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LAMP2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LAMP2_GetValue()           PORTAbits.RA1
#define LAMP2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LAMP2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LAMP2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LAMP2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LAMP2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LAMP2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LAMP2_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define LAMP2_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set LAMP3 aliases
#define LAMP3_TRIS                 TRISAbits.TRISA2
#define LAMP3_LAT                  LATAbits.LATA2
#define LAMP3_PORT                 PORTAbits.RA2
#define LAMP3_WPU                  WPUAbits.WPUA2
#define LAMP3_OD                   ODCONAbits.ODCA2
#define LAMP3_ANS                  ANSELAbits.ANSELA2
#define LAMP3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LAMP3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LAMP3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LAMP3_GetValue()           PORTAbits.RA2
#define LAMP3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LAMP3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LAMP3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LAMP3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LAMP3_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LAMP3_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LAMP3_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define LAMP3_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set LAMP4 aliases
#define LAMP4_TRIS                 TRISAbits.TRISA3
#define LAMP4_LAT                  LATAbits.LATA3
#define LAMP4_PORT                 PORTAbits.RA3
#define LAMP4_WPU                  WPUAbits.WPUA3
#define LAMP4_OD                   ODCONAbits.ODCA3
#define LAMP4_ANS                  ANSELAbits.ANSELA3
#define LAMP4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LAMP4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LAMP4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LAMP4_GetValue()           PORTAbits.RA3
#define LAMP4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LAMP4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LAMP4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LAMP4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LAMP4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LAMP4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LAMP4_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define LAMP4_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set LAMP5 aliases
#define LAMP5_TRIS                 TRISAbits.TRISA4
#define LAMP5_LAT                  LATAbits.LATA4
#define LAMP5_PORT                 PORTAbits.RA4
#define LAMP5_WPU                  WPUAbits.WPUA4
#define LAMP5_OD                   ODCONAbits.ODCA4
#define LAMP5_ANS                  ANSELAbits.ANSELA4
#define LAMP5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LAMP5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LAMP5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LAMP5_GetValue()           PORTAbits.RA4
#define LAMP5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LAMP5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LAMP5_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LAMP5_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LAMP5_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LAMP5_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LAMP5_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define LAMP5_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set LAMP6 aliases
#define LAMP6_TRIS                 TRISAbits.TRISA5
#define LAMP6_LAT                  LATAbits.LATA5
#define LAMP6_PORT                 PORTAbits.RA5
#define LAMP6_WPU                  WPUAbits.WPUA5
#define LAMP6_OD                   ODCONAbits.ODCA5
#define LAMP6_ANS                  ANSELAbits.ANSELA5
#define LAMP6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LAMP6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LAMP6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LAMP6_GetValue()           PORTAbits.RA5
#define LAMP6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LAMP6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LAMP6_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LAMP6_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LAMP6_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LAMP6_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LAMP6_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LAMP6_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set LAMP7 aliases
#define LAMP7_TRIS                 TRISAbits.TRISA6
#define LAMP7_LAT                  LATAbits.LATA6
#define LAMP7_PORT                 PORTAbits.RA6
#define LAMP7_WPU                  WPUAbits.WPUA6
#define LAMP7_OD                   ODCONAbits.ODCA6
#define LAMP7_ANS                  ANSELAbits.ANSELA6
#define LAMP7_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LAMP7_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LAMP7_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LAMP7_GetValue()           PORTAbits.RA6
#define LAMP7_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LAMP7_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define LAMP7_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define LAMP7_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define LAMP7_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define LAMP7_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define LAMP7_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define LAMP7_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set LAMP8 aliases
#define LAMP8_TRIS                 TRISAbits.TRISA7
#define LAMP8_LAT                  LATAbits.LATA7
#define LAMP8_PORT                 PORTAbits.RA7
#define LAMP8_WPU                  WPUAbits.WPUA7
#define LAMP8_OD                   ODCONAbits.ODCA7
#define LAMP8_ANS                  ANSELAbits.ANSELA7
#define LAMP8_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LAMP8_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LAMP8_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LAMP8_GetValue()           PORTAbits.RA7
#define LAMP8_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LAMP8_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LAMP8_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LAMP8_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LAMP8_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LAMP8_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LAMP8_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define LAMP8_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set DATA aliases
#define DATA_TRIS                 TRISBbits.TRISB0
#define DATA_LAT                  LATBbits.LATB0
#define DATA_PORT                 PORTBbits.RB0
#define DATA_WPU                  WPUBbits.WPUB0
#define DATA_OD                   ODCONBbits.ODCB0
#define DATA_ANS                  ANSELBbits.ANSELB0
#define DATA_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DATA_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DATA_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DATA_GetValue()           PORTBbits.RB0
#define DATA_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DATA_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DATA_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define DATA_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define DATA_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define DATA_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define DATA_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define DATA_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set CLOCK aliases
#define CLOCK_TRIS                 TRISBbits.TRISB1
#define CLOCK_LAT                  LATBbits.LATB1
#define CLOCK_PORT                 PORTBbits.RB1
#define CLOCK_WPU                  WPUBbits.WPUB1
#define CLOCK_OD                   ODCONBbits.ODCB1
#define CLOCK_ANS                  ANSELBbits.ANSELB1
#define CLOCK_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define CLOCK_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define CLOCK_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define CLOCK_GetValue()           PORTBbits.RB1
#define CLOCK_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define CLOCK_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define CLOCK_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define CLOCK_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define CLOCK_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define CLOCK_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define CLOCK_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define CLOCK_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISBbits.TRISB2
#define LED1_LAT                  LATBbits.LATB2
#define LED1_PORT                 PORTBbits.RB2
#define LED1_WPU                  WPUBbits.WPUB2
#define LED1_OD                   ODCONBbits.ODCB2
#define LED1_ANS                  ANSELBbits.ANSELB2
#define LED1_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED1_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED1_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED1_GetValue()           PORTBbits.RB2
#define LED1_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED1_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISBbits.TRISB3
#define LED2_LAT                  LATBbits.LATB3
#define LED2_PORT                 PORTBbits.RB3
#define LED2_WPU                  WPUBbits.WPUB3
#define LED2_OD                   ODCONBbits.ODCB3
#define LED2_ANS                  ANSELBbits.ANSELB3
#define LED2_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED2_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED2_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED2_GetValue()           PORTBbits.RB3
#define LED2_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED2_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set DIP2 aliases
#define DIP2_TRIS                 TRISBbits.TRISB4
#define DIP2_LAT                  LATBbits.LATB4
#define DIP2_PORT                 PORTBbits.RB4
#define DIP2_WPU                  WPUBbits.WPUB4
#define DIP2_OD                   ODCONBbits.ODCB4
#define DIP2_ANS                  ANSELBbits.ANSELB4
#define DIP2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define DIP2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define DIP2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define DIP2_GetValue()           PORTBbits.RB4
#define DIP2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define DIP2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define DIP2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define DIP2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define DIP2_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define DIP2_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define DIP2_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define DIP2_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set DIP1 aliases
#define DIP1_TRIS                 TRISBbits.TRISB5
#define DIP1_LAT                  LATBbits.LATB5
#define DIP1_PORT                 PORTBbits.RB5
#define DIP1_WPU                  WPUBbits.WPUB5
#define DIP1_OD                   ODCONBbits.ODCB5
#define DIP1_ANS                  ANSELBbits.ANSELB5
#define DIP1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define DIP1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define DIP1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define DIP1_GetValue()           PORTBbits.RB5
#define DIP1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define DIP1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define DIP1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define DIP1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define DIP1_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define DIP1_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define DIP1_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define DIP1_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set SW2 aliases
#define SW2_TRIS                 TRISBbits.TRISB6
#define SW2_LAT                  LATBbits.LATB6
#define SW2_PORT                 PORTBbits.RB6
#define SW2_WPU                  WPUBbits.WPUB6
#define SW2_OD                   ODCONBbits.ODCB6
#define SW2_ANS                  ANSELBbits.ANSELB6
#define SW2_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SW2_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SW2_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SW2_GetValue()           PORTBbits.RB6
#define SW2_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SW2_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SW2_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define SW2_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define SW2_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define SW2_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define SW2_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define SW2_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set SW1 aliases
#define SW1_TRIS                 TRISBbits.TRISB7
#define SW1_LAT                  LATBbits.LATB7
#define SW1_PORT                 PORTBbits.RB7
#define SW1_WPU                  WPUBbits.WPUB7
#define SW1_OD                   ODCONBbits.ODCB7
#define SW1_ANS                  ANSELBbits.ANSELB7
#define SW1_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SW1_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SW1_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SW1_GetValue()           PORTBbits.RB7
#define SW1_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SW1_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define SW1_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define SW1_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define SW1_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define SW1_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define SW1_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set LAMP9 aliases
#define LAMP9_TRIS                 TRISCbits.TRISC0
#define LAMP9_LAT                  LATCbits.LATC0
#define LAMP9_PORT                 PORTCbits.RC0
#define LAMP9_WPU                  WPUCbits.WPUC0
#define LAMP9_OD                   ODCONCbits.ODCC0
#define LAMP9_ANS                  ANSELCbits.ANSELC0
#define LAMP9_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LAMP9_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LAMP9_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LAMP9_GetValue()           PORTCbits.RC0
#define LAMP9_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LAMP9_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LAMP9_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LAMP9_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LAMP9_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LAMP9_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LAMP9_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define LAMP9_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set LAMP10 aliases
#define LAMP10_TRIS                 TRISCbits.TRISC1
#define LAMP10_LAT                  LATCbits.LATC1
#define LAMP10_PORT                 PORTCbits.RC1
#define LAMP10_WPU                  WPUCbits.WPUC1
#define LAMP10_OD                   ODCONCbits.ODCC1
#define LAMP10_ANS                  ANSELCbits.ANSELC1
#define LAMP10_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LAMP10_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LAMP10_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LAMP10_GetValue()           PORTCbits.RC1
#define LAMP10_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LAMP10_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LAMP10_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LAMP10_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LAMP10_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LAMP10_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LAMP10_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define LAMP10_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set LAMP11 aliases
#define LAMP11_TRIS                 TRISCbits.TRISC2
#define LAMP11_LAT                  LATCbits.LATC2
#define LAMP11_PORT                 PORTCbits.RC2
#define LAMP11_WPU                  WPUCbits.WPUC2
#define LAMP11_OD                   ODCONCbits.ODCC2
#define LAMP11_ANS                  ANSELCbits.ANSELC2
#define LAMP11_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LAMP11_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LAMP11_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LAMP11_GetValue()           PORTCbits.RC2
#define LAMP11_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LAMP11_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LAMP11_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LAMP11_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LAMP11_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LAMP11_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LAMP11_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define LAMP11_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set LAMP12 aliases
#define LAMP12_TRIS                 TRISCbits.TRISC3
#define LAMP12_LAT                  LATCbits.LATC3
#define LAMP12_PORT                 PORTCbits.RC3
#define LAMP12_WPU                  WPUCbits.WPUC3
#define LAMP12_OD                   ODCONCbits.ODCC3
#define LAMP12_ANS                  ANSELCbits.ANSELC3
#define LAMP12_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LAMP12_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LAMP12_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LAMP12_GetValue()           PORTCbits.RC3
#define LAMP12_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LAMP12_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LAMP12_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LAMP12_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LAMP12_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LAMP12_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LAMP12_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define LAMP12_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set LAMP13 aliases
#define LAMP13_TRIS                 TRISCbits.TRISC4
#define LAMP13_LAT                  LATCbits.LATC4
#define LAMP13_PORT                 PORTCbits.RC4
#define LAMP13_WPU                  WPUCbits.WPUC4
#define LAMP13_OD                   ODCONCbits.ODCC4
#define LAMP13_ANS                  ANSELCbits.ANSELC4
#define LAMP13_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LAMP13_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LAMP13_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LAMP13_GetValue()           PORTCbits.RC4
#define LAMP13_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LAMP13_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LAMP13_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LAMP13_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LAMP13_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LAMP13_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LAMP13_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define LAMP13_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set LAMP14 aliases
#define LAMP14_TRIS                 TRISCbits.TRISC5
#define LAMP14_LAT                  LATCbits.LATC5
#define LAMP14_PORT                 PORTCbits.RC5
#define LAMP14_WPU                  WPUCbits.WPUC5
#define LAMP14_OD                   ODCONCbits.ODCC5
#define LAMP14_ANS                  ANSELCbits.ANSELC5
#define LAMP14_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LAMP14_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LAMP14_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LAMP14_GetValue()           PORTCbits.RC5
#define LAMP14_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LAMP14_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LAMP14_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LAMP14_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LAMP14_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LAMP14_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LAMP14_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define LAMP14_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set LAMP15 aliases
#define LAMP15_TRIS                 TRISCbits.TRISC6
#define LAMP15_LAT                  LATCbits.LATC6
#define LAMP15_PORT                 PORTCbits.RC6
#define LAMP15_WPU                  WPUCbits.WPUC6
#define LAMP15_OD                   ODCONCbits.ODCC6
#define LAMP15_ANS                  ANSELCbits.ANSELC6
#define LAMP15_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LAMP15_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LAMP15_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LAMP15_GetValue()           PORTCbits.RC6
#define LAMP15_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LAMP15_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LAMP15_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LAMP15_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LAMP15_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LAMP15_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LAMP15_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define LAMP15_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set LAMP16 aliases
#define LAMP16_TRIS                 TRISCbits.TRISC7
#define LAMP16_LAT                  LATCbits.LATC7
#define LAMP16_PORT                 PORTCbits.RC7
#define LAMP16_WPU                  WPUCbits.WPUC7
#define LAMP16_OD                   ODCONCbits.ODCC7
#define LAMP16_ANS                  ANSELCbits.ANSELC7
#define LAMP16_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LAMP16_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LAMP16_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LAMP16_GetValue()           PORTCbits.RC7
#define LAMP16_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LAMP16_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LAMP16_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LAMP16_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LAMP16_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define LAMP16_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define LAMP16_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define LAMP16_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/