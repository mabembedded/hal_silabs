/**************************************************************************//**
 * @file
 * @brief BGM21 LDMA XBAR channel request soruce definitions
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
#ifndef BGM21_LDMAXBAR_DEFINES_H
#define BGM21_LDMAXBAR_DEFINES_H

// Module source selection indices
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_NONE               0x00000000UL /**< Mode NONE for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_LDMAXBAR           0x00000001UL /**< Mode LDMAXBAR for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER0             0x00000002UL /**< Mode TIMER0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER1             0x00000003UL /**< Mode TIMER1 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_USART0             0x00000004UL /**< Mode USART0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_USART1             0x00000005UL /**< Mode USART1 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_USART2             0x00000006UL /**< Mode USART2 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_I2C0               0x00000007UL /**< Mode I2C0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_I2C1               0x00000008UL /**< Mode I2C1 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_IADC0              0x0000000cUL /**< Mode IADC0 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_MSC                0x0000000dUL /**< Mode MSC for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER2             0x0000000eUL /**< Mode TIMER2 for LDMAXBAR_CH_REQSEL */
#define _LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER3             0x0000000fUL /**< Mode TIMER3 for LDMAXBAR_CH_REQSEL */

// Shifted source selection indices
#define LDMAXBAR_CH_REQSEL_SOURCESEL_NONE                (_LDMAXBAR_CH_REQSEL_SOURCESEL_NONE << 16)
#define LDMAXBAR_CH_REQSEL_SOURCESEL_LDMAXBAR            (_LDMAXBAR_CH_REQSEL_SOURCESEL_LDMAXBAR << 16) /**< Shifted Mode LDMAXBAR for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER0              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER0 << 16)   /**< Shifted Mode TIMER0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER1              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER1 << 16)   /**< Shifted Mode TIMER1 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_USART0              (_LDMAXBAR_CH_REQSEL_SOURCESEL_USART0 << 16)   /**< Shifted Mode USART0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_USART1              (_LDMAXBAR_CH_REQSEL_SOURCESEL_USART1 << 16)   /**< Shifted Mode USART1 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_USART2              (_LDMAXBAR_CH_REQSEL_SOURCESEL_USART2 << 16)   /**< Shifted Mode USART2 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_I2C0                (_LDMAXBAR_CH_REQSEL_SOURCESEL_I2C0 << 16)     /**< Shifted Mode I2C0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_I2C1                (_LDMAXBAR_CH_REQSEL_SOURCESEL_I2C1 << 16)     /**< Shifted Mode I2C1 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_IADC0               (_LDMAXBAR_CH_REQSEL_SOURCESEL_IADC0 << 16)    /**< Shifted Mode IADC0 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_MSC                 (_LDMAXBAR_CH_REQSEL_SOURCESEL_MSC << 16)      /**< Shifted Mode MSC for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER2              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER2 << 16)   /**< Shifted Mode TIMER2 for LDMAXBAR_CH_REQSEL */
#define LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER3              (_LDMAXBAR_CH_REQSEL_SOURCESEL_TIMER3 << 16)   /**< Shifted Mode TIMER3 for LDMAXBAR_CH_REQSEL */

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
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAV         0x00000000UL /** Mode USART1RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT    0x00000001UL /** Mode USART1RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBL            0x00000002UL /** Mode USART1TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBLRIGHT       0x00000003UL /** Mode USART1TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXEMPTY         0x00000004UL /** Mode USART1TXEMPTY for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAV         0x00000000UL /** Mode USART2RXDATAV for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAVRIGHT    0x00000001UL /** Mode USART2RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBL            0x00000002UL /** Mode USART2TXBL for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBLRIGHT       0x00000003UL /** Mode USART2TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define _LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXEMPTY         0x00000004UL /** Mode USART2TXEMPTY for LDMAXBAR_CH_REQSEL**/
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
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAV          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAV << 0)      /** Shifted Mode USART1RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT     (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT << 0) /** Shifted Mode USART1RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBL             (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBL << 0)         /** Shifted Mode USART1TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBLRIGHT        (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXBLRIGHT << 0)    /** Shifted Mode USART1TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXEMPTY          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART1TXEMPTY << 0)      /** Shifted Mode USART1TXEMPTY for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAV          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAV << 0)      /** Shifted Mode USART2RXDATAV for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAVRIGHT     (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2RXDATAVRIGHT << 0) /** Shifted Mode USART2RXDATAVRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBL             (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBL << 0)         /** Shifted Mode USART2TXBL for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBLRIGHT        (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXBLRIGHT << 0)    /** Shifted Mode USART2TXBLRIGHT for LDMAXBAR_CH_REQSEL**/
#define LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXEMPTY          (_LDMAXBAR_CH_REQSEL_SIGSEL_USART2TXEMPTY << 0)      /** Shifted Mode USART2TXEMPTY for LDMAXBAR_CH_REQSEL**/
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

#endif // BGM21_LDMAXBAR_DEFINES_H
