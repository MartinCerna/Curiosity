/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define SEG_A_TRIS                 TRISAbits.TRISA0
#define SEG_A_LAT                  LATAbits.LATA0
#define SEG_A_PORT                 PORTAbits.RA0
#define SEG_A_WPU                  WPUAbits.WPUA0
#define SEG_A_OD                   ODCONAbits.ODCA0
#define SEG_A_ANS                  ANSELAbits.ANSELA0
#define SEG_A_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SEG_A_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SEG_A_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SEG_A_GetValue()           PORTAbits.RA0
#define SEG_A_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SEG_A_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SEG_A_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define SEG_A_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define SEG_A_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define SEG_A_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define SEG_A_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define SEG_A_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA1 aliases
#define SEG_B_TRIS                 TRISAbits.TRISA1
#define SEG_B_LAT                  LATAbits.LATA1
#define SEG_B_PORT                 PORTAbits.RA1
#define SEG_B_WPU                  WPUAbits.WPUA1
#define SEG_B_OD                   ODCONAbits.ODCA1
#define SEG_B_ANS                  ANSELAbits.ANSELA1
#define SEG_B_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define SEG_B_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define SEG_B_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define SEG_B_GetValue()           PORTAbits.RA1
#define SEG_B_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define SEG_B_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define SEG_B_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define SEG_B_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define SEG_B_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define SEG_B_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define SEG_B_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define SEG_B_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 aliases
#define SEG_C_TRIS                 TRISAbits.TRISA2
#define SEG_C_LAT                  LATAbits.LATA2
#define SEG_C_PORT                 PORTAbits.RA2
#define SEG_C_WPU                  WPUAbits.WPUA2
#define SEG_C_OD                   ODCONAbits.ODCA2
#define SEG_C_ANS                  ANSELAbits.ANSELA2
#define SEG_C_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SEG_C_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SEG_C_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SEG_C_GetValue()           PORTAbits.RA2
#define SEG_C_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SEG_C_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SEG_C_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SEG_C_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SEG_C_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define SEG_C_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define SEG_C_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define SEG_C_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA3 aliases
#define SEG_D_TRIS                 TRISAbits.TRISA3
#define SEG_D_LAT                  LATAbits.LATA3
#define SEG_D_PORT                 PORTAbits.RA3
#define SEG_D_WPU                  WPUAbits.WPUA3
#define SEG_D_OD                   ODCONAbits.ODCA3
#define SEG_D_ANS                  ANSELAbits.ANSELA3
#define SEG_D_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define SEG_D_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define SEG_D_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define SEG_D_GetValue()           PORTAbits.RA3
#define SEG_D_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define SEG_D_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define SEG_D_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define SEG_D_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define SEG_D_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define SEG_D_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define SEG_D_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define SEG_D_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set RA4 aliases
#define SEG_E_TRIS                 TRISAbits.TRISA4
#define SEG_E_LAT                  LATAbits.LATA4
#define SEG_E_PORT                 PORTAbits.RA4
#define SEG_E_WPU                  WPUAbits.WPUA4
#define SEG_E_OD                   ODCONAbits.ODCA4
#define SEG_E_ANS                  ANSELAbits.ANSELA4
#define SEG_E_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SEG_E_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SEG_E_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SEG_E_GetValue()           PORTAbits.RA4
#define SEG_E_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SEG_E_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SEG_E_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SEG_E_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SEG_E_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define SEG_E_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define SEG_E_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define SEG_E_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 aliases
#define SEG_F_TRIS                 TRISAbits.TRISA5
#define SEG_F_LAT                  LATAbits.LATA5
#define SEG_F_PORT                 PORTAbits.RA5
#define SEG_F_WPU                  WPUAbits.WPUA5
#define SEG_F_OD                   ODCONAbits.ODCA5
#define SEG_F_ANS                  ANSELAbits.ANSELA5
#define SEG_F_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SEG_F_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SEG_F_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SEG_F_GetValue()           PORTAbits.RA5
#define SEG_F_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SEG_F_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SEG_F_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SEG_F_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SEG_F_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SEG_F_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SEG_F_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define SEG_F_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA6 aliases
#define SEG_G_TRIS                 TRISAbits.TRISA6
#define SEG_G_LAT                  LATAbits.LATA6
#define SEG_G_PORT                 PORTAbits.RA6
#define SEG_G_WPU                  WPUAbits.WPUA6
#define SEG_G_OD                   ODCONAbits.ODCA6
#define SEG_G_ANS                  ANSELAbits.ANSELA6
#define SEG_G_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define SEG_G_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define SEG_G_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define SEG_G_GetValue()           PORTAbits.RA6
#define SEG_G_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define SEG_G_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define SEG_G_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define SEG_G_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define SEG_G_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define SEG_G_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define SEG_G_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define SEG_G_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 aliases
#define SEG_DP_TRIS                 TRISAbits.TRISA7
#define SEG_DP_LAT                  LATAbits.LATA7
#define SEG_DP_PORT                 PORTAbits.RA7
#define SEG_DP_WPU                  WPUAbits.WPUA7
#define SEG_DP_OD                   ODCONAbits.ODCA7
#define SEG_DP_ANS                  ANSELAbits.ANSELA7
#define SEG_DP_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define SEG_DP_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define SEG_DP_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define SEG_DP_GetValue()           PORTAbits.RA7
#define SEG_DP_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define SEG_DP_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define SEG_DP_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define SEG_DP_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define SEG_DP_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define SEG_DP_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define SEG_DP_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define SEG_DP_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/