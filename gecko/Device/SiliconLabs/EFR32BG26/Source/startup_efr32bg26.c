/******************************************************************************
* @file     startup_efr32bg26.c
* @brief    CMSIS-Core(M) Device Startup File for
*           Device EFR32BG26
* @version  V2.1.0
* @date     16. December 2020
*******************************************************************************
* # License
*
* The licensor of this software is Silicon Laboratories Inc. Your use of this
* software is governed by the terms of Silicon Labs Master Software License
* Agreement (MSLA) available at
* www.silabs.com/about-us/legal/master-software-license-agreement. This
* software is Third Party Software licensed by Silicon Labs from a third party
* and is governed by the sections of the MSLA applicable to Third Party
* Software and the additional terms set forth below.
*
******************************************************************************/
/*
 * Copyright (c) 2009-2021 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdbool.h>
#include "em_device.h"

#ifdef BOOTLOADER_ENABLE
#include "api/btl_interface.h"

#endif // BOOTLOADER_ENABLE
#ifdef SL_APP_PROPERTIES
#include "api/application_properties.h"

#endif // SL_APP_PROPERTIES

#define TOTAL_INTERRUPTS    (16 + EXT_IRQ_COUNT)

#ifdef BOOTLOADER_ENABLE
extern MainBootloaderTable_t mainStageTable;
extern void SystemInit2(void);

/*----------------------------------------------------------------------------
 * Exception / Interrupt Handler Function Prototype
 *----------------------------------------------------------------------------*/
typedef void (*VECTOR_TABLE_Type)(void);
#endif

#ifdef SL_APP_PROPERTIES
extern ApplicationProperties_t sl_app_properties;

/*----------------------------------------------------------------------------
 * Exception / Interrupt Handler Function Prototype
 *----------------------------------------------------------------------------*/
typedef void (*VECTOR_TABLE_Type)(void);
#endif

/*---------------------------------------------------------------------------
 * External References
 *---------------------------------------------------------------------------*/
extern uint32_t __INITIAL_SP;
#if defined (SL_TRUSTZONE_SECURE)
extern uint32_t __STACK_LIMIT;
#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
extern uint64_t __STACK_SEAL;
#endif // __ARM_FEATURE_CMSE
#endif // SL_TRUSTZONE_SECURE

extern __NO_RETURN void __PROGRAM_START(void);

#if defined (__START) && defined (__GNUC__)
extern int  __START(void) __attribute__((noreturn));    /* main entry point */
void Copy_Table();
void Zero_Table();
#endif // __START
#if !defined(SL_LEGACY_LINKER)
#if defined (__GNUC__)
// Function to copy RAM functions from Flash to RAM at startup time
void CopyRamFuncs();
#endif
#endif

/*---------------------------------------------------------------------------
 * Internal References
 *---------------------------------------------------------------------------*/
__NO_RETURN void Reset_Handler(void);
void Default_Handler(void);

#if defined (__GNUC__)
#ifndef __STACK_SIZE
#define __STACK_SIZE    0x00000400
#endif // __STACK_SIZE

#ifndef __HEAP_SIZE
#define __HEAP_SIZE    0x00000C00
#endif // __HEAP_SIZE
#endif // __GNUC__

/*----------------------------------------------------------------------------
 * Exception / Interrupt Handler
 *----------------------------------------------------------------------------*/
/* Cortex-M Processor Exceptions */
void NMI_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void SecureFault_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void DebugMon_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
#ifndef SL_APP_PROPERTIES
/* Provide a dummy value for the sl_app_properties symbol. */
void sl_app_properties(void);    /* Prototype to please MISRA checkers. */
void sl_app_properties(void) __attribute__ ((weak, alias("Default_Handler")));
#endif

/* Part Specific Interrupts */
void SMU_SECURE_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SMU_S_PRIVILEGED_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SMU_NS_PRIVILEGED_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EMU_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER2_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER3_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER4_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER5_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER6_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER7_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER8_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIMER9_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void USART0_RX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void USART0_TX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void USART1_RX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void USART1_TX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void USART2_RX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void USART2_TX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EUSART0_RX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EUSART0_TX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EUSART1_RX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EUSART1_TX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EUSART2_RX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EUSART2_TX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EUSART3_RX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EUSART3_TX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void MVP_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void ICACHE0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void BURTC_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void LETIMER0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SYSCFG_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void MPAHBRAM0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void MPAHBRAM1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void LDMA_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void LFXO_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void LFRCO_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void ULFRCO_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void GPIO_ODD_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void GPIO_EVEN_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C2_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C3_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EMUDG_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void AGC_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void BUFC_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void FRC_PRI_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void FRC_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void MODEM_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void PROTIMER_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void RAC_RSM_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void RAC_SEQ_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void HOSTMAILBOX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SYNTH_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void ACMP0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void ACMP1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void WDOG0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void WDOG1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void HFXO0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void HFRCO0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void HFRCOEM23_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void CMU_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void AES_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void IADC_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void MSC_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DPLL0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void EMUEFP_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DCDC_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void PCNT0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SW0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SW1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SW2_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SW3_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void KERNEL0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void KERNEL1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void M33CTI0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void M33CTI1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void FPUEXH_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SETAMPERHOST_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SEMBRX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SEMBTX_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SYSRTC_APP_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SYSRTC_SEQ_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void KEYSCAN_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void RFECA0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void RFECA1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void VDAC0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void VDAC1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void AHB2AHB0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void AHB2AHB1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void LCD_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));

/*----------------------------------------------------------------------------
 * Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/

#if defined (__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#endif // __GNUC__

#if defined (__ICCARM__)
#pragma data_alignment=512
extern const tVectorEntry __VECTOR_TABLE[TOTAL_INTERRUPTS];
const tVectorEntry        __VECTOR_TABLE[TOTAL_INTERRUPTS] __VECTOR_TABLE_ATTRIBUTE = {
#elif defined(__GNUC__)
extern const tVectorEntry __VECTOR_TABLE[TOTAL_INTERRUPTS];
const tVectorEntry __VECTOR_TABLE[TOTAL_INTERRUPTS] __attribute__((aligned(512)))
__VECTOR_TABLE_ATTRIBUTE = {
#else
extern const tVectorEntry __VECTOR_TABLE[TOTAL_INTERRUPTS];
const tVectorEntry __VECTOR_TABLE[TOTAL_INTERRUPTS] __VECTOR_TABLE_ATTRIBUTE = {
#endif
  { .topOfStack = &__INITIAL_SP },            /*      Initial Stack Pointer     */
  { Reset_Handler },                          /*      Reset Handler             */
  { NMI_Handler },                            /*      -14 NMI Handler           */
  { HardFault_Handler },                      /*      -13 Hard Fault Handler    */
  { MemManage_Handler },                      /*      -12 MPU Fault Handler     */
  { BusFault_Handler },                       /*      -11 Bus Fault Handler     */
  { UsageFault_Handler },                     /*      -10 Usage Fault Handler   */
  { SecureFault_Handler },                    /*      -9 Secure Fault Handler   */
  { Default_Handler },                        /*      Reserved                  */
  { Default_Handler },                        /*      Reserved                  */
#ifdef BOOTLOADER_ENABLE
  { (VECTOR_TABLE_Type) & mainStageTable },
#else
  { Default_Handler },                         /*      Reserved                  */
#endif
  { SVC_Handler },                             /*      -5 SVCall Handler         */
  { DebugMon_Handler },                        /*      -4 Debug Monitor Handler  */
#ifdef SL_APP_PROPERTIES
  { (VECTOR_TABLE_Type) & sl_app_properties }, /*      Application properties    */
#else
  { sl_app_properties },                       /*      Application properties    */
#endif
  { PendSV_Handler },                          /*      -2 PendSV Handler         */
  { SysTick_Handler },                         /*      -1 SysTick Handler        */

  /* External interrupts */
  { SMU_SECURE_IRQHandler },                       /* 00 = SMU_SECURE */
  { SMU_S_PRIVILEGED_IRQHandler },                 /* 01 = SMU_S_PRIVILEGED */
  { SMU_NS_PRIVILEGED_IRQHandler },                /* 02 = SMU_NS_PRIVILEGED */
  { EMU_IRQHandler },                              /* 03 = EMU */
  { TIMER0_IRQHandler },                           /* 04 = TIMER0 */
  { TIMER1_IRQHandler },                           /* 05 = TIMER1 */
  { TIMER2_IRQHandler },                           /* 06 = TIMER2 */
  { TIMER3_IRQHandler },                           /* 07 = TIMER3 */
  { TIMER4_IRQHandler },                           /* 08 = TIMER4 */
  { TIMER5_IRQHandler },                           /* 09 = TIMER5 */
  { TIMER6_IRQHandler },                           /* 10 = TIMER6 */
  { TIMER7_IRQHandler },                           /* 11 = TIMER7 */
  { TIMER8_IRQHandler },                           /* 12 = TIMER8 */
  { TIMER9_IRQHandler },                           /* 13 = TIMER9 */
  { USART0_RX_IRQHandler },                        /* 14 = USART0_RX */
  { USART0_TX_IRQHandler },                        /* 15 = USART0_TX */
  { USART1_RX_IRQHandler },                        /* 16 = USART1_RX */
  { USART1_TX_IRQHandler },                        /* 17 = USART1_TX */
  { USART2_RX_IRQHandler },                        /* 18 = USART2_RX */
  { USART2_TX_IRQHandler },                        /* 19 = USART2_TX */
  { EUSART0_RX_IRQHandler },                       /* 20 = EUSART0_RX */
  { EUSART0_TX_IRQHandler },                       /* 21 = EUSART0_TX */
  { EUSART1_RX_IRQHandler },                       /* 22 = EUSART1_RX */
  { EUSART1_TX_IRQHandler },                       /* 23 = EUSART1_TX */
  { EUSART2_RX_IRQHandler },                       /* 24 = EUSART2_RX */
  { EUSART2_TX_IRQHandler },                       /* 25 = EUSART2_TX */
  { EUSART3_RX_IRQHandler },                       /* 26 = EUSART3_RX */
  { EUSART3_TX_IRQHandler },                       /* 27 = EUSART3_TX */
  { MVP_IRQHandler },                              /* 28 = MVP */
  { ICACHE0_IRQHandler },                          /* 29 = ICACHE0 */
  { BURTC_IRQHandler },                            /* 30 = BURTC */
  { LETIMER0_IRQHandler },                         /* 31 = LETIMER0 */
  { SYSCFG_IRQHandler },                           /* 32 = SYSCFG */
  { MPAHBRAM0_IRQHandler },                        /* 33 = MPAHBRAM0 */
  { MPAHBRAM1_IRQHandler },                        /* 34 = MPAHBRAM1 */
  { LDMA_IRQHandler },                             /* 35 = LDMA */
  { LFXO_IRQHandler },                             /* 36 = LFXO */
  { LFRCO_IRQHandler },                            /* 37 = LFRCO */
  { ULFRCO_IRQHandler },                           /* 38 = ULFRCO */
  { GPIO_ODD_IRQHandler },                         /* 39 = GPIO_ODD */
  { GPIO_EVEN_IRQHandler },                        /* 40 = GPIO_EVEN */
  { I2C0_IRQHandler },                             /* 41 = I2C0 */
  { I2C1_IRQHandler },                             /* 42 = I2C1 */
  { I2C2_IRQHandler },                             /* 43 = I2C2 */
  { I2C3_IRQHandler },                             /* 44 = I2C3 */
  { EMUDG_IRQHandler },                            /* 45 = EMUDG */
  { AGC_IRQHandler },                              /* 46 = AGC */
  { BUFC_IRQHandler },                             /* 47 = BUFC */
  { FRC_PRI_IRQHandler },                          /* 48 = FRC_PRI */
  { FRC_IRQHandler },                              /* 49 = FRC */
  { MODEM_IRQHandler },                            /* 50 = MODEM */
  { PROTIMER_IRQHandler },                         /* 51 = PROTIMER */
  { RAC_RSM_IRQHandler },                          /* 52 = RAC_RSM */
  { RAC_SEQ_IRQHandler },                          /* 53 = RAC_SEQ */
  { HOSTMAILBOX_IRQHandler },                      /* 54 = HOSTMAILBOX */
  { SYNTH_IRQHandler },                            /* 55 = SYNTH */
  { ACMP0_IRQHandler },                            /* 56 = ACMP0 */
  { ACMP1_IRQHandler },                            /* 57 = ACMP1 */
  { WDOG0_IRQHandler },                            /* 58 = WDOG0 */
  { WDOG1_IRQHandler },                            /* 59 = WDOG1 */
  { HFXO0_IRQHandler },                            /* 60 = HFXO0 */
  { HFRCO0_IRQHandler },                           /* 61 = HFRCO0 */
  { HFRCOEM23_IRQHandler },                        /* 62 = HFRCOEM23 */
  { CMU_IRQHandler },                              /* 63 = CMU */
  { AES_IRQHandler },                              /* 64 = AES */
  { IADC_IRQHandler },                             /* 65 = IADC */
  { MSC_IRQHandler },                              /* 66 = MSC */
  { DPLL0_IRQHandler },                            /* 67 = DPLL0 */
  { EMUEFP_IRQHandler },                           /* 68 = EMUEFP */
  { DCDC_IRQHandler },                             /* 69 = DCDC */
  { PCNT0_IRQHandler },                            /* 70 = PCNT0 */
  { SW0_IRQHandler },                              /* 71 = SW0 */
  { SW1_IRQHandler },                              /* 72 = SW1 */
  { SW2_IRQHandler },                              /* 73 = SW2 */
  { SW3_IRQHandler },                              /* 74 = SW3 */
  { KERNEL0_IRQHandler },                          /* 75 = KERNEL0 */
  { KERNEL1_IRQHandler },                          /* 76 = KERNEL1 */
  { M33CTI0_IRQHandler },                          /* 77 = M33CTI0 */
  { M33CTI1_IRQHandler },                          /* 78 = M33CTI1 */
  { FPUEXH_IRQHandler },                           /* 79 = FPUEXH */
  { SETAMPERHOST_IRQHandler },                     /* 80 = SETAMPERHOST */
  { SEMBRX_IRQHandler },                           /* 81 = SEMBRX */
  { SEMBTX_IRQHandler },                           /* 82 = SEMBTX */
  { SYSRTC_APP_IRQHandler },                       /* 83 = SYSRTC_APP */
  { SYSRTC_SEQ_IRQHandler },                       /* 84 = SYSRTC_SEQ */
  { KEYSCAN_IRQHandler },                          /* 85 = KEYSCAN */
  { RFECA0_IRQHandler },                           /* 86 = RFECA0 */
  { RFECA1_IRQHandler },                           /* 87 = RFECA1 */
  { VDAC0_IRQHandler },                            /* 88 = VDAC0 */
  { VDAC1_IRQHandler },                            /* 89 = VDAC1 */
  { AHB2AHB0_IRQHandler },                         /* 90 = AHB2AHB0 */
  { AHB2AHB1_IRQHandler },                         /* 91 = AHB2AHB1 */
  { LCD_IRQHandler },                              /* 92 = LCD */
};

#if defined (__GNUC__)
#pragma GCC diagnostic pop
#endif // __GNUC__

#if defined (__START) && defined (__GNUC__)
void Copy_Table()
{
  uint32_t        *pSrc, *pDest;
  extern uint32_t __etext;
  extern uint32_t __data_start__;
  extern uint32_t __data_end__;
  pSrc  = &__etext;
  pDest = &__data_start__;

  for (; pDest < &__data_end__; ) {
    *pDest++ = *pSrc++;
  }
}

void Zero_Table()
{
  uint32_t        *pDest;
  extern uint32_t __bss_start__;
  extern uint32_t __bss_end__;
  pDest = &__bss_start__;

  for (; pDest < &__bss_end__; ) {
    *pDest++ = 0UL;
  }
}
#endif // __START

#if !defined(SL_LEGACY_LINKER) && !defined(SL_RAM_LINKER)
#if defined (__GNUC__)
void CopyRamFuncs()
{
  extern uint32_t __lma_ramfuncs_start__;
  extern uint32_t __lma_ramfuncs_end__;
  extern uint32_t __ramfuncs_start__;
  uint32_t        size = &__lma_ramfuncs_end__ - &__lma_ramfuncs_start__;

  FlashToRamCopy(&__lma_ramfuncs_start__, &__ramfuncs_start__, size);
}
#endif
#endif

/*---------------------------------------------------------------------------
 * Reset Handler called on controller reset
 *---------------------------------------------------------------------------*/
__NO_RETURN void Reset_Handler(void)
{
#if defined (SL_TRUSTZONE_SECURE)
  __set_MSPLIM((uint32_t) (&__STACK_LIMIT));

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
  __TZ_set_STACKSEAL_S((uint32_t *) (&__STACK_SEAL));
#endif // __ARM_FEATURE_CMSE
#endif // SL_TRUSTZONE_SECURE

  #ifndef __NO_SYSTEM_INIT
  SystemInit();                    /* CMSIS System Initialization */
  #endif

#ifdef BOOTLOADER_ENABLE
  SystemInit2();
#endif // BOOTLOADER_ENABLE
#if !defined(SL_LEGACY_LINKER) && !defined(SL_RAM_LINKER)
#if defined (__GNUC__)
  CopyRamFuncs();
#endif
#endif
#if defined (__GNUC__) && defined (__START)
  Copy_Table();
  Zero_Table();
  __START();
#else
  __PROGRAM_START();               /* Enter PreMain (C library entry point) */
#endif // __GNUC__
}

#if defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wmissing-noreturn"
#endif // __ARMCC_VERSION

/*----------------------------------------------------------------------------
 * Default Handler for Exceptions / Interrupts
 *----------------------------------------------------------------------------*/
void Default_Handler(void)
{
  while (true) {
  }
}

#if defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
#endif // __ARMCC_VERSION
