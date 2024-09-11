/**************************************************************************//**
 * @file
 * @brief EFR32BG26 LDMA XBAR channel request soruce definitions
 ******************************************************************************
 * # License
 * <b>Copyright 2024 Silicon Laboratories, Inc. www.silabs.com</b>
 ******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *****************************************************************************/
#ifndef EFR32BG26_LDMAXBAR_DEFINES_H
#define EFR32BG26_LDMAXBAR_DEFINES_H

// Module source selection indices
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_NONE               0x00000000UL /**< Mode NONE for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_LDMAXBAR           0x00000001UL /**< Mode LDMAXBAR for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER0             0x00000002UL /**< Mode TIMER0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER1             0x00000003UL /**< Mode TIMER1 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_USART0             0x00000004UL /**< Mode USART0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_I2C0               0x00000005UL /**< Mode I2C0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_I2C1               0x00000006UL /**< Mode I2C1 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_IADC0              0x0000000aUL /**< Mode IADC0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_MSC                0x0000000bUL /**< Mode MSC for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER2             0x0000000cUL /**< Mode TIMER2 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER3             0x0000000dUL /**< Mode TIMER3 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER4             0x0000000eUL /**< Mode TIMER4 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART0            0x0000000fUL /**< Mode EUSART0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART1            0x00000010UL /**< Mode EUSART1 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_VDAC0              0x00000011UL /**< Mode VDAC0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_VDAC1              0x00000012UL /**< Mode VDAC1 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART2            0x00000013UL /**< Mode EUSART2 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART3            0x00000014UL /**< Mode EUSART3 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_USART1             0x00000015UL /**< Mode USART1 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_USART2             0x00000016UL /**< Mode USART2 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER5             0x00000017UL /**< Mode TIMER5 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER6             0x00000018UL /**< Mode TIMER6 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER7             0x00000019UL /**< Mode TIMER7 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER8             0x0000001aUL /**< Mode TIMER8 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER9             0x0000001bUL /**< Mode TIMER9 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_I2C2               0x0000001cUL /**< Mode I2C2 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_I2C3               0x0000001dUL /**< Mode I2C3 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_LCD                0x0000001eUL /**< Mode LCD for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_MVP                0x0000001fUL /**< Mode MVP for LDMAXBAR_CH_REQSEL */

// Shifted source selection indices
#define LDMAXBAR_CH_REQSEL_SOURCESEL_NONE                (_LDMAXBAR_CH_REQSEL_SOURCESEL_NONE << 16)
#define LDMAXBAR_CH_REQSEL_SOURCESEL_LDMAXBAR            (_LDMAXBAR_CH_REQSEL_SOURCESEL_LDMAXBAR << 16) /**< Shifted Mode LDMAXBAR for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER0              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER0 << 16)   /**< Shifted Mode TIMER0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER1              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER1 << 16)   /**< Shifted Mode TIMER1 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_USART0              (_LDMAXBAR_CH_REQSEL_SOURCESEL_USART0 << 16)   /**< Shifted Mode USART0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_I2C0                (_LDMAXBAR_CH_REQSEL_SOURCESEL_I2C0 << 16)     /**< Shifted Mode I2C0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_I2C1                (_LDMAXBAR_CH_REQSEL_SOURCESEL_I2C1 << 16)     /**< Shifted Mode I2C1 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_IADC0               (_LDMAXBAR_CH_REQSEL_SOURCESEL_IADC0 << 16)    /**< Shifted Mode IADC0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_MSC                 (_LDMAXBAR_CH_REQSEL_SOURCESEL_MSC << 16)      /**< Shifted Mode MSC for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER2              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER2 << 16)   /**< Shifted Mode TIMER2 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER3              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER3 << 16)   /**< Shifted Mode TIMER3 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER4              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER4 << 16)   /**< Shifted Mode TIMER4 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART0             (_LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART0 << 16)  /**< Shifted Mode EUSART0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART1             (_LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART1 << 16)  /**< Shifted Mode EUSART1 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_VDAC0               (_LDMAXBAR_CH_REQSEL_SOURCESEL_VDAC0 << 16)    /**< Shifted Mode VDAC0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_VDAC1               (_LDMAXBAR_CH_REQSEL_SOURCESEL_VDAC1 << 16)    /**< Shifted Mode VDAC1 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART2             (_LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART2 << 16)  /**< Shifted Mode EUSART2 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART3             (_LDMAXBAR_CH_REQSEL_SOURCESEL_EUSART3 << 16)  /**< Shifted Mode EUSART3 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_USART1              (_LDMAXBAR_CH_REQSEL_SOURCESEL_USART1 << 16)   /**< Shifted Mode USART1 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_USART2              (_LDMAXBAR_CH_REQSEL_SOURCESEL_USART2 << 16)   /**< Shifted Mode USART2 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER5              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER5 << 16)   /**< Shifted Mode TIMER5 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER6              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER6 << 16)   /**< Shifted Mode TIMER6 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER7              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER7 << 16)   /**< Shifted Mode TIMER7 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER8              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER8 << 16)   /**< Shifted Mode TIMER8 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER9              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER9 << 16)   /**< Shifted Mode TIMER9 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_I2C2                (_LDMAXBAR_CH_REQSEL_SOURCESEL_I2C2 << 16)     /**< Shifted Mode I2C2 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_I2C3                (_LDMAXBAR_CH_REQSEL_SOURCESEL_I2C3 << 16)     /**< Shifted Mode I2C3 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_LCD                 (_LDMAXBAR_CH_REQSEL_SOURCESEL_LCD << 16)      /**< Shifted Mode LCD for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_MVP                 (_LDMAXBAR_CH_REQSEL_SOURCESEL_MVP << 16)      /**< Shifted Mode MVP for LDMAXBAR_CH_REQSEL */

// Module signal selection indices
#define _LDMAXBAR_CH_REQSEL_SIGSEL_LDMAXBARPRSREQ0       0x00000000UL /** Mode LDMAXBARPRSREQ0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_LDMAXBARPRSREQ1       0x00000001UL /** Mode LDMAXBARPRSREQ1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC0             0x00000000UL /** Mode TIMER0CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC1             0x00000001UL /** Mode TIMER0CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC2             0x00000002UL /** Mode TIMER0CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0UFOF            0x00000003UL /** Mode TIMER0UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC0             0x00000000UL /** Mode TIMER1CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC1             0x00000001UL /** Mode TIMER1CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC2             0x00000002UL /** Mode TIMER1CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1UFOF            0x00000003UL /** Mode TIMER1UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART0RXDATAV         0x00000000UL /** Mode USART0RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART0RXDATAVRIGHT    0x00000001UL /** Mode USART0RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXBL            0x00000002UL /** Mode USART0TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXBLRIGHT       0x00000003UL /** Mode USART0TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXEMPTY         0x00000004UL /** Mode USART0TXEMPTY for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_I2C0RXDATAV           0x00000000UL /** Mode I2C0RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_I2C0TXBL              0x00000001UL /** Mode I2C0TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_I2C1RXDATAV           0x00000000UL /** Mode I2C1RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_I2C1TXBL              0x00000001UL /** Mode I2C1TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_IADC0IADC_SCAN        0x00000000UL /** Mode IADC0IADC_SCAN for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_IADC0IADC_SINGLE      0x00000001UL /** Mode IADC0IADC_SINGLE for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_MSCWDATA              0x00000000UL /** Mode MSCWDATA for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC0             0x00000000UL /** Mode TIMER2CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC1             0x00000001UL /** Mode TIMER2CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC2             0x00000002UL /** Mode TIMER2CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2UFOF            0x00000003UL /** Mode TIMER2UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC0             0x00000000UL /** Mode TIMER3CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC1             0x00000001UL /** Mode TIMER3CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC2             0x00000002UL /** Mode TIMER3CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3UFOF            0x00000003UL /** Mode TIMER3UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC0             0x00000000UL /** Mode TIMER4CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC1             0x00000001UL /** Mode TIMER4CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC2             0x00000002UL /** Mode TIMER4CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4UFOF            0x00000003UL /** Mode TIMER4UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_EUSART0RXFL           0x00000000UL /** Mode EUSART0RXFL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_EUSART0TXFL           0x00000001UL /** Mode EUSART0TXFL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_EUSART1RXFL           0x00000000UL /** Mode EUSART1RXFL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_EUSART1TXFL           0x00000001UL /** Mode EUSART1TXFL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_VDAC0CH0_REQ          0x00000000UL /** Mode VDAC0CH0_REQ for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_VDAC0CH1_REQ          0x00000001UL /** Mode VDAC0CH1_REQ for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_VDAC1CH0_REQ          0x00000000UL /** Mode VDAC1CH0_REQ for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_VDAC1CH1_REQ          0x00000001UL /** Mode VDAC1CH1_REQ for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_EUSART2RXFL           0x00000000UL /** Mode EUSART2RXFL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_EUSART2TXFL           0x00000001UL /** Mode EUSART2TXFL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_EUSART3RXFL           0x00000000UL /** Mode EUSART3RXFL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_EUSART3TXFL           0x00000001UL /** Mode EUSART3TXFL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAV         0x00000000UL /** Mode USART1RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT    0x00000001UL /** Mode USART1RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBL            0x00000002UL /** Mode USART1TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBLRIGHT       0x00000003UL /** Mode USART1TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXEMPTY         0x00000004UL /** Mode USART1TXEMPTY for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAV         0x00000000UL /** Mode USART2RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAVRIGHT    0x00000001UL /** Mode USART2RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBLRIGHT       0x00000002UL /** Mode USART2TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXEMPTY         0x00000003UL /** Mode USART2TXEMPTY for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBL            0x00000004UL /** Mode USART2TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC0             0x00000000UL /** Mode TIMER5CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC1             0x00000001UL /** Mode TIMER5CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC2             0x00000002UL /** Mode TIMER5CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5UFOF            0x00000003UL /** Mode TIMER5UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC0             0x00000000UL /** Mode TIMER6CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC1             0x00000001UL /** Mode TIMER6CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC2             0x00000002UL /** Mode TIMER6CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6UFOF            0x00000003UL /** Mode TIMER6UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC0             0x00000000UL /** Mode TIMER7CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC1             0x00000001UL /** Mode TIMER7CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC2             0x00000002UL /** Mode TIMER7CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7UFOF            0x00000003UL /** Mode TIMER7UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC0             0x00000000UL /** Mode TIMER8CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC1             0x00000001UL /** Mode TIMER8CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC2             0x00000002UL /** Mode TIMER8CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8UFOF            0x00000003UL /** Mode TIMER8UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC0             0x00000000UL /** Mode TIMER9CC0 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC1             0x00000001UL /** Mode TIMER9CC1 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC2             0x00000002UL /** Mode TIMER9CC2 for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9UFOF            0x00000003UL /** Mode TIMER9UFOF for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_I2C2RXDATAV           0x00000000UL /** Mode I2C2RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_I2C2TXBL              0x00000001UL /** Mode I2C2TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_I2C3RXDATAV           0x00000000UL /** Mode I2C3RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_I2C3TXBL              0x00000001UL /** Mode I2C3TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_LCD                   0x00000000UL /** Mode LCD for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_MVPREQ                0x00000000UL /** Mode MVPREQ for LDMAXBAR_CH_REQSEL**/

// Shifted Module signal selection indices
#define LDMAXBAR_CH_REQSEL_SIGSEL_LDMAXBARPRSREQ0        (_LDMAXBAR_CH_REQSEL_SIGSEL_LDMAXBARPRSREQ0 << 0)    /** Shifted Mode LDMAXBARPRSREQ0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_LDMAXBARPRSREQ1        (_LDMAXBAR_CH_REQSEL_SIGSEL_LDMAXBARPRSREQ1 << 0)    /** Shifted Mode LDMAXBARPRSREQ1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC0 << 0)          /** Shifted Mode TIMER0CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC1 << 0)          /** Shifted Mode TIMER0CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0CC2 << 0)          /** Shifted Mode TIMER0CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER0UFOF << 0)         /** Shifted Mode TIMER0UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC0 << 0)          /** Shifted Mode TIMER1CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC1 << 0)          /** Shifted Mode TIMER1CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1CC2 << 0)          /** Shifted Mode TIMER1CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER1UFOF << 0)         /** Shifted Mode TIMER1UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART0RXDATAV          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART0RXDATAV << 0)      /** Shifted Mode USART0RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART0RXDATAVRIGHT     (_LDMAXBAR_CH_REQSEL_SIGSEL_USART0RXDATAVRIGHT << 0) /** Shifted Mode USART0RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXBL             (_LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXBL << 0)         /** Shifted Mode USART0TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXBLRIGHT        (_LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXBLRIGHT << 0)    /** Shifted Mode USART0TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXEMPTY          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART0TXEMPTY << 0)      /** Shifted Mode USART0TXEMPTY for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_I2C0RXDATAV            (_LDMAXBAR_CH_REQSEL_SIGSEL_I2C0RXDATAV << 0)        /** Shifted Mode I2C0RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_I2C0TXBL               (_LDMAXBAR_CH_REQSEL_SIGSEL_I2C0TXBL << 0)           /** Shifted Mode I2C0TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_I2C1RXDATAV            (_LDMAXBAR_CH_REQSEL_SIGSEL_I2C1RXDATAV << 0)        /** Shifted Mode I2C1RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_I2C1TXBL               (_LDMAXBAR_CH_REQSEL_SIGSEL_I2C1TXBL << 0)           /** Shifted Mode I2C1TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_IADC0IADC_SCAN         (_LDMAXBAR_CH_REQSEL_SIGSEL_IADC0IADC_SCAN << 0)     /** Shifted Mode IADC0IADC_SCAN for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_IADC0IADC_SINGLE       (_LDMAXBAR_CH_REQSEL_SIGSEL_IADC0IADC_SINGLE << 0)   /** Shifted Mode IADC0IADC_SINGLE for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_MSCWDATA               (_LDMAXBAR_CH_REQSEL_SIGSEL_MSCWDATA << 0)           /** Shifted Mode MSCWDATA for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC0 << 0)          /** Shifted Mode TIMER2CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC1 << 0)          /** Shifted Mode TIMER2CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2CC2 << 0)          /** Shifted Mode TIMER2CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER2UFOF << 0)         /** Shifted Mode TIMER2UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC0 << 0)          /** Shifted Mode TIMER3CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC1 << 0)          /** Shifted Mode TIMER3CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3CC2 << 0)          /** Shifted Mode TIMER3CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER3UFOF << 0)         /** Shifted Mode TIMER3UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC0 << 0)          /** Shifted Mode TIMER4CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC1 << 0)          /** Shifted Mode TIMER4CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4CC2 << 0)          /** Shifted Mode TIMER4CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER4UFOF << 0)         /** Shifted Mode TIMER4UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_EUSART0RXFL            (_LDMAXBAR_CH_REQSEL_SIGSEL_EUSART0RXFL << 0)        /** Shifted Mode EUSART0RXFL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_EUSART0TXFL            (_LDMAXBAR_CH_REQSEL_SIGSEL_EUSART0TXFL << 0)        /** Shifted Mode EUSART0TXFL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_EUSART1RXFL            (_LDMAXBAR_CH_REQSEL_SIGSEL_EUSART1RXFL << 0)        /** Shifted Mode EUSART1RXFL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_EUSART1TXFL            (_LDMAXBAR_CH_REQSEL_SIGSEL_EUSART1TXFL << 0)        /** Shifted Mode EUSART1TXFL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_VDAC0CH0_REQ           (_LDMAXBAR_CH_REQSEL_SIGSEL_VDAC0CH0_REQ << 0)       /** Shifted Mode VDAC0CH0_REQ for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_VDAC0CH1_REQ           (_LDMAXBAR_CH_REQSEL_SIGSEL_VDAC0CH1_REQ << 0)       /** Shifted Mode VDAC0CH1_REQ for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_VDAC1CH0_REQ           (_LDMAXBAR_CH_REQSEL_SIGSEL_VDAC1CH0_REQ << 0)       /** Shifted Mode VDAC1CH0_REQ for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_VDAC1CH1_REQ           (_LDMAXBAR_CH_REQSEL_SIGSEL_VDAC1CH1_REQ << 0)       /** Shifted Mode VDAC1CH1_REQ for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_EUSART2RXFL            (_LDMAXBAR_CH_REQSEL_SIGSEL_EUSART2RXFL << 0)        /** Shifted Mode EUSART2RXFL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_EUSART2TXFL            (_LDMAXBAR_CH_REQSEL_SIGSEL_EUSART2TXFL << 0)        /** Shifted Mode EUSART2TXFL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_EUSART3RXFL            (_LDMAXBAR_CH_REQSEL_SIGSEL_EUSART3RXFL << 0)        /** Shifted Mode EUSART3RXFL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_EUSART3TXFL            (_LDMAXBAR_CH_REQSEL_SIGSEL_EUSART3TXFL << 0)        /** Shifted Mode EUSART3TXFL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAV          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAV << 0)      /** Shifted Mode USART1RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT     (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT << 0) /** Shifted Mode USART1RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBL             (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBL << 0)         /** Shifted Mode USART1TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBLRIGHT        (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBLRIGHT << 0)    /** Shifted Mode USART1TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXEMPTY          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXEMPTY << 0)      /** Shifted Mode USART1TXEMPTY for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAV          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAV << 0)      /** Shifted Mode USART2RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAVRIGHT     (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAVRIGHT << 0) /** Shifted Mode USART2RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBLRIGHT        (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBLRIGHT << 0)    /** Shifted Mode USART2TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXEMPTY          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXEMPTY << 0)      /** Shifted Mode USART2TXEMPTY for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBL             (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBL << 0)         /** Shifted Mode USART2TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC0 << 0)          /** Shifted Mode TIMER5CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC1 << 0)          /** Shifted Mode TIMER5CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5CC2 << 0)          /** Shifted Mode TIMER5CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER5UFOF << 0)         /** Shifted Mode TIMER5UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC0 << 0)          /** Shifted Mode TIMER6CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC1 << 0)          /** Shifted Mode TIMER6CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6CC2 << 0)          /** Shifted Mode TIMER6CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER6UFOF << 0)         /** Shifted Mode TIMER6UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC0 << 0)          /** Shifted Mode TIMER7CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC1 << 0)          /** Shifted Mode TIMER7CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7CC2 << 0)          /** Shifted Mode TIMER7CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER7UFOF << 0)         /** Shifted Mode TIMER7UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC0 << 0)          /** Shifted Mode TIMER8CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC1 << 0)          /** Shifted Mode TIMER8CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8CC2 << 0)          /** Shifted Mode TIMER8CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER8UFOF << 0)         /** Shifted Mode TIMER8UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC0              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC0 << 0)          /** Shifted Mode TIMER9CC0 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC1              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC1 << 0)          /** Shifted Mode TIMER9CC1 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC2              (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9CC2 << 0)          /** Shifted Mode TIMER9CC2 for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9UFOF             (_LDMAXBAR_CH_REQSEL_SIGSEL_TIMER9UFOF << 0)         /** Shifted Mode TIMER9UFOF for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_I2C2RXDATAV            (_LDMAXBAR_CH_REQSEL_SIGSEL_I2C2RXDATAV << 0)        /** Shifted Mode I2C2RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_I2C2TXBL               (_LDMAXBAR_CH_REQSEL_SIGSEL_I2C2TXBL << 0)           /** Shifted Mode I2C2TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_I2C3RXDATAV            (_LDMAXBAR_CH_REQSEL_SIGSEL_I2C3RXDATAV << 0)        /** Shifted Mode I2C3RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_I2C3TXBL               (_LDMAXBAR_CH_REQSEL_SIGSEL_I2C3TXBL << 0)           /** Shifted Mode I2C3TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_LCD                    (_LDMAXBAR_CH_REQSEL_SIGSEL_LCD << 0)                /** Shifted Mode LCD for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_MVPREQ                 (_LDMAXBAR_CH_REQSEL_SIGSEL_MVPREQ << 0)             /** Shifted Mode MVPREQ for LDMAXBAR_CH_REQSEL**/

#endif // EFR32BG26_LDMAXBAR_DEFINES_H
