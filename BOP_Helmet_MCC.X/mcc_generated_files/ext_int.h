/**
   EXT_INT Generated Driver File
 
   @Company
     Microchip Technology Inc.
 
   @File Name
     ext_int.c
 
   @Summary
     This is the generated driver implementation file for the EXT_INT driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs
 
   @Description
     This source file provides implementations for driver APIs for EXT_INT.
     Generation Information :
         Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
         Device            :  PIC18F25K42
         Driver Version    :  1.11
     The generated drivers are tested against the following:
         Compiler          :  XC8 2.36 and above
         MPLAB             :  MPLAB X 6.00
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

#ifndef _EXT_INT_H
#define _EXT_INT_H

/**
    Section: Includes
*/
#include <xc.h>

// Provide C++ Compatibility
#ifdef __cplusplus  

extern "C" {

#endif

/**
    Section: Macros
*/
/**
  @Summary
    Clears the interrupt flag for INT1

  @Description
    This routine clears the interrupt flag for the external interrupt, INT1.
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void INT1_ISR(void)
    {
        // User Area Begin->code

        // User Area End->code
        EXT_INT1_InterruptFlagClear();
    }
    </code>

*/
#define EXT_INT1_InterruptFlagClear()       (PIR5bits.INT1IF = 0)

/**
  @Summary
    Clears the interrupt enable for INT1

  @Description
    This routine clears the interrupt enable for the external interrupt, INT1.
    After calling this routine, external interrupts on this pin will not be serviced by the 
    interrupt handler, INT1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Changing the external interrupt edge detect from negative to positive
    <code>
    // clear the interrupt enable
    EXT_INT1_InterruptDisable();
    // change the edge
    EXT_INT1_risingEdgeSet();
    // clear the interrupt flag and re-enable the interrupt
    EXT_INT1_InterruptFlagClear();
    EXT_INT1_InterruptEnable();
    </code>

*/
#define EXT_INT1_InterruptDisable()     (PIE5bits.INT1IE = 0)

/**
  @Summary
    Sets the interrupt enable for INT1

  @Description
    This routine sets the interrupt enable for the external interrupt, INT1.
    After calling this routine, external interrupts on this pin will be serviced by the 
    interrupt handler, INT1.
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Setting the external interrupt to handle positive edge interrupts
    <code>
    // set the edge
    EXT_INT1_risingEdgeSet();
    // clear the interrupt flag and enable the interrupt
    EXT_INT1_InterruptFlagClear();
    EXT_INT1_InterruptEnable();
    </code>

*/
#define EXT_INT1_InterruptEnable()       (PIE5bits.INT1IE = 1)

/**
  @Summary
    Sets the edge detect of the external interrupt to negative edge.

  @Description
    This routine set the edge detect of the extern interrupt to negative edge.  
    After this routine is called the interrupt flag will be set when the external 
    interrupt pins level transitions from a high to low level.
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Setting the external interrupt to handle negative edge interrupts
    <code>
    // set the edge
    EXT_INT1_risingEdgeSet();
    // clear the interrupt flag and enable the interrupt
    EXT_INT1_InterruptFlagClear();
    EXT_INT1_InterruptEnable();
    </code>

*/
#define EXT_INT1_risingEdgeSet()          (INTCON0bits.INT1EDG = 1)

/**
  @Summary
    Sets the edge detect of the external interrupt to positive edge.

  @Description
    This routine set the edge detect of the extern interrupt to positive edge.  
    After this routine is called the interrupt flag will be set when the external 
    interrupt pins level transitions from a low to high level.
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Setting the external interrupt to handle positive edge interrupts
    <code>
    // set the edge
    EXT_INT1_risingEdgeSet();
    // clear the interrupt flag and enable the interrupt
    EXT_INT1_InterruptFlagClear();
    EXT_INT1_InterruptEnable();
    </code>

*/
#define EXT_INT1_fallingEdgeSet()          (INTCON0bits.INT1EDG = 0)
/**
    Section: External Interrupt Initializers
 */
/**
  @Summary
    Initializes the external interrupt pins

  @Description
    This routine initializes the EXT_INT driver to detect the configured edge, clear
    the interrupt flag and enable the interrupt.

    The following external interrupts will be initialized:
    INT1 - EXT_INT1
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Initialize the external interrupt pins
    <code>
    EXT_INT_Initialize();
    </code>

*/
void EXT_INT_Initialize(void);

/**
   Section: External Interrupt Handlers
 */
/**
  @Summary
    Interrupt Service Routine for EXT_INT1 - INT1 pin

  @Description
    This ISR will execute whenever the signal on the INT1 pin will transition to the preconfigured state.
    
  @Preconditions
    EXT_INT intializer called

  @Returns
    None.

  @Param
    None.

*/
void INT1_ISR(void);

/**
  @Summary
    Callback function for EXT_INT1 - INT1

  @Description
    Allows for a specific callback function to be called in the INT1 ISR.
    It also allows for a non-specific interrupt handler to be called at runtime.
    
  @Preconditions
    EXT_INT intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    EXT_INT_Initializer();
    void INT1_CallBack();

*/
void INT1_CallBack(void);

/**
  @Summary
    Interrupt Handler Setter for EXT_INT1 - INT1 pin

  @Description
    Allows selecting an interrupt handler for EXT_INT1 - INT1 at application runtime
    
  @Preconditions
    EXT_INT intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    EXT_INT_Initializer();
    INT1_SetInterruptHandler(MyInterruptHandler);

*/
void INT1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for EXT_INT1 - INT1 pin

  @Description
    This is the dynamic interrupt handler to be used together with the INT1_SetInterruptHandler() method.
    This handler is called every time the INT1 ISR is executed and allows any function to be registered at runtime. 
    
  @Preconditions
    EXT_INT intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    EXT_INT_Initializer();
    INT1_SetInterruptHandler(INT1_InterruptHandler);

*/
extern void (*INT1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for EXT_INT1 - INT1 pin

  @Description
    This is a predefined interrupt handler to be used together with the INT1_SetInterruptHandler() method.
    This handler is called every time the INT1 ISR is executed. 
    
  @Preconditions
    EXT_INT intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    EXT_INT_Initializer();
    INT1_SetInterruptHandler(INT1_DefaultInterruptHandler);

*/
void INT1_DefaultInterruptHandler(void);

// Provide C++ Compatibility
#ifdef __cplusplus  

}

#endif
#endif
