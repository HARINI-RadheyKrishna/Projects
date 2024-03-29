/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_device_registers.h"
#include "fsl_gpio.h"
#include "fsl_port.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Definition of peripheral ID */
#define FTM0_PERIPHERAL FTM0
/* Definition of timer input frequency in Hz. */
#define FTM0_TIMER_INTPUT_FREQUENCY 60000000UL
/* Definition of timer initialization value. */
#define FTM0_TIMER_INIT_VALUE 0UL
/* Definition of timer modulo value. */
#define FTM0_TIMER_MODULO_VALUE 5999UL
/* Definition of channel/pair number. */
#define FTM0_FTM0_CH0_CHANNEL 0
/* Definition of channel/pair number. */
#define FTM0_FTM0_CH1_CHANNEL 1
/* Definition of channel/pair number. */
#define FTM0_FTM0_CH2_CHANNEL 2
/* Definition of channel/pair number. */
#define FTM0_FTM0_CH4_CHANNEL 4
/* Definition of channel/pair number. */
#define FTM0_FTM0_CH5_CHANNEL 5
/* Definition of channel/pair number. */
#define FTM0_FTM0_CH6_CHANNEL 6
/* Definition of the output initialization mask (the OUTINIT, OUTMASK and POL registers). */
#define FTM0_OUT_INIT_MASK 0x77
/* Definition of the Combine register initialization mask (the COMBINE register). */
#define FTM0_COMBINE_INIT_MASK 0x7F7F7F7F
/* Definition of the inversion control initialization mask (the INVCTRL register). */
#define FTM0_INVCTRL_INIT_MASK 0xF
/* Definition of the filter initialization mask (the FILTER register). */
#define FTM0_FILTER_INIT_MASK 0xFFF
/* Start the timer in the initialization (enable counter clocks in the SC[CLKS] bitfield). */
#define FTM0_START_TIMER_IN_INIT true
/* FTM0_SC: TOIE=0, CPWMS=0, CLKS=1, PS=0 */
#define FTM0_SC_INIT 0x8U
/* FTM0_MOD: MOD=5999 */
#define FTM0_MOD_INIT 0x176FU
/* FTM0_C0SC: CHIE=0, MSB=1, MSA=0, ELSB=1, ELSA=0, DMA=0 */
#define FTM0_C0SC_INIT 0x28U
/* FTM0_C0V: VAL=1200 */
#define FTM0_C0V_INIT 0x4B0U
/* FTM0_C1SC: CHIE=0, MSB=1, MSA=0, ELSB=1, ELSA=0, DMA=0 */
#define FTM0_C1SC_INIT 0x28U
/* FTM0_C1V: VAL=0 */
#define FTM0_C1V_INIT 0x0U
/* FTM0_C2SC: CHIE=0, MSB=1, MSA=0, ELSB=1, ELSA=0, DMA=0 */
#define FTM0_C2SC_INIT 0x28U
/* FTM0_C2V: VAL=0 */
#define FTM0_C2V_INIT 0x0U
/* FTM0_C4SC: CHIE=0, MSB=1, MSA=0, ELSB=1, ELSA=0, DMA=0 */
#define FTM0_C4SC_INIT 0x28U
/* FTM0_C4V: VAL=0 */
#define FTM0_C4V_INIT 0x0U
/* FTM0_C5SC: CHIE=0, MSB=1, MSA=0, ELSB=1, ELSA=0, DMA=0 */
#define FTM0_C5SC_INIT 0x28U
/* FTM0_C5V: VAL=0 */
#define FTM0_C5V_INIT 0x0U
/* FTM0_C6SC: CHIE=0, MSB=1, MSA=0, ELSB=1, ELSA=0, DMA=0 */
#define FTM0_C6SC_INIT 0x28U
/* FTM0_C6V: VAL=0 */
#define FTM0_C6V_INIT 0x0U
/* FTM0_CNTIN: INIT=0 */
#define FTM0_CNTIN_INIT 0x0U
/* FTM0_MODE: FAULTIE=0, FAULTM=0, PWMSYNC=0, INIT=0, FTMEN=1 */
#define FTM0_MODE_INIT 0x5U
/* FTM0_SYNC: TRIG2=0, TRIG1=0, TRIG0=0, SYNCHOM=1, REINIT=1, CNTMAX=0, CNTMIN=1 */
#define FTM0_SYNC_INIT 0xDU
/* FTM0_OUTINIT: CH6OI=0, CH5OI=0, CH4OI=0, CH2OI=0, CH1OI=0, CH0OI=0 */
#define FTM0_OUTINIT_INIT 0x0U
/* FTM0_OUTMASK: CH6OM=0, CH5OM=0, CH4OM=0, CH2OM=0, CH1OM=0, CH0OM=0 */
#define FTM0_OUTMASK_INIT 0x0U
/* FTM0_COMBINE: FAULTEN3=0, SYNCEN3=1, DECAPEN3=0, COMP3=0, COMBINE3=0, FAULTEN2=0, SYNCEN2=1, DECAPEN2=0, COMP2=0, COMBINE2=0, FAULTEN1=0, SYNCEN1=1, DECAPEN1=0, COMP1=0, COMBINE1=0, FAULTEN0=0, SYNCEN0=1, DECAPEN0=0, COMP0=0, COMBINE0=0 */
#define FTM0_COMBINE_INIT 0x20202020U
/* FTM0_DEADTIME: DTPS=0, DTVAL=0 */
#define FTM0_DEADTIME_INIT 0x0U
/* FTM0_EXTTRIG: INITTRIGEN=1, CH1TRIG=0, CH0TRIG=0, CH5TRIG=0, CH4TRIG=0, CH3TRIG=0, CH2TRIG=0 */
#define FTM0_EXTTRIG_INIT 0x40U
/* FTM0_POL: POL6=0, POL5=0, POL4=0, POL2=0, POL1=0, POL0=0 */
#define FTM0_POL_INIT 0x0U
/* FTM0_FMS: WPEN=0 */
#define FTM0_FMS_INIT 0x0U
/* FTM0_FLTCTRL: FFVAL=0, FAULT3EN=0, FAULT2EN=0, FAULT1EN=0, FAULT0EN=0 */
#define FTM0_FLTCTRL_INIT 0x0U
/* FTM0_QDCTRL: QUADEN=0 */
#define FTM0_QDCTRL_INIT 0x0U
/* FTM0_CONF: GTBEOUT=0, GTBEEN=1, BDMMODE=0, NUMTOF=0 */
#define FTM0_CONF_INIT 0x200U
/* FTM0_SYNCONF: HWSOC=0, HWINVC=0, HWOM=0, HWWRBUF=0, HWRSTCNT=0, SWSOC=1, SWINVC=1, SWOM=1, SWWRBUF=1, SWRSTCNT=1, SYNCMODE=1, SWOC=1, INVC=1, CNTINC=1, HWTRIGMODE=0 */
#define FTM0_SYNCONF_INIT 0x1FB4U
/* FTM0_SWOCTRL: CH6OCV=0, CH5OCV=0, CH4OCV=0, CH2OCV=0, CH1OCV=0, CH0OCV=0, CH6OC=0, CH5OC=0, CH4OC=0, CH2OC=0, CH1OC=0, CH0OC=0 */
#define FTM0_SWOCTRL_INIT 0x0U
/* FTM0_PWMLOAD: CH7SEL=0, CH6SEL=0, CH5SEL=0, CH4SEL=0, CH3SEL=0, CH2SEL=0, CH1SEL=0, CH0SEL=0 */
#define FTM0_PWMLOAD_INIT 0x0U
/* FTM0 interrupt vector ID (number). */
#define FTM0_IRQN FTM0_IRQn
/* FTM0 interrupt handler identifier. */
#define FTM0_IRQHANDLER FTM0_IRQHandler
/* Alias for GPIOB peripheral */
#define GPIOB_GPIO GPIOB

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/

void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
