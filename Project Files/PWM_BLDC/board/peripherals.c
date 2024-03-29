/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v10.0
processor: MKV31F512xxx12
package_id: MKV31F512VLL12
mcu_data: ksdk2_0
processor_version: 10.0.1
board: FRDM-KV31F
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: fb360ff1-b184-469e-b3cf-ea4b39342cd3
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'uart_cmsis_common'
- type_id: 'uart_cmsis_common_9cb8e302497aa696fdbb5a4fd622c2a8'
- global_USART_CMSIS_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * NVIC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'NVIC'
- type: 'nvic'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'nvic_57b5eef3774cc60acaede6f5b8bddc67'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'NVIC'
- config_sets:
  - nvic:
    - interrupt_table:
      - 0: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void NVIC_init(void) {
} */

/***********************************************************************************************************************
 * FTM0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FTM0'
- type: 'ftm_reg'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'ftm_reg_e245a0495d1fbb718fd3cabddb0c8c9b'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FTM0'
- config_sets:
  - ftm_main_config:
    - ftmMode: 'UpCounting'
    - ftm_config:
      - compatibilityMode: '1'
      - clockSource: '1'
      - clockSourceFreq: 'BOARD_BootClockHSRUN'
      - timerPrescaler: '1'
      - counterMode: 'unsigned'
      - counterInitValueStr: '0'
      - timerOutputFrequency: '10 kHz'
      - systemClockSource: 'BusInterfaceClock'
      - systemClockSourceFreq: 'BOARD_BootClockHSRUN'
      - ftm_quad_decoder_mode: '0'
      - ftm_phase_a_params:
        - enablePhaseFilter: 'false'
        - phaseFilterPeriod: ''
        - phasePolarity: '0'
      - ftm_phase_b_params:
        - enablePhaseFilter: 'false'
        - phaseFilterPeriod: ''
        - phasePolarity: '0'
      - faultMode: '0'
      - inputFilterPeriod: '1'
      - faultInputs:
        - 0:
          - enableFaultInput: 'false'
          - faultLevelVal: '1'
          - useFaultFilter: 'false'
        - 1:
          - enableFaultInput: 'false'
          - faultLevelVal: '1'
          - useFaultFilter: 'false'
        - 2:
          - enableFaultInput: 'false'
          - faultLevelVal: '1'
          - useFaultFilter: 'false'
        - 3:
          - enableFaultInput: 'false'
          - faultLevelVal: '1'
          - useFaultFilter: 'false'
      - deadTimePrescale: '0'
      - deadTimePeriod: '0'
      - synchronization:
        - pwmSyncMode: ''
        - hwTriggerMode: '0'
        - synchronizationMode: '1'
        - synchronizationMethod:
          - SWOC: '1'
          - INVC: '1'
          - SYNCHOM: '1'
          - CNTINC: '1'
        - loadingPoint: 'CntMin'
        - pwmSynchronizationMode: '0'
        - counterReinit: 'true'
        - triggerSynchronization:
          - HWSOC: 'false'
          - SWSOC: 'true'
          - HWINVC: 'false'
          - SWINVC: 'true'
          - HWOM: 'false'
          - SWOM: 'true'
          - HWWRBUF: 'false'
          - SWWRBUF: 'true'
          - HWRSTCNT: 'false'
          - SWRSTCNT: 'true'
      - intermediateLoad:
        - reloadPoints: ''
      - extTriggers: 'InitTrigger'
      - writeProtection: 'false'
      - outputInit: 'false'
      - bdmMode: '0'
      - enableTimerInInit: 'true'
      - useGlobalTimeBase: 'true'
      - globalTimeBaseOutput: 'false'
    - timer_interrupts: ''
    - loadFrequencyTOF: '1'
    - enable_irq: 'true'
    - ftm_interrupt:
      - IRQn: 'FTM0_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - ftmChannelConfig:
      - 0:
        - channelId: 'FTM0_CH0'
        - channelMode: 'edgeAlignedPwm'
        - complementaryMode: 'false'
        - channelNumber: '0'
        - level: '2'
        - secondLevel: '0'
        - activateDualEdge: 'false'
        - inputCaptureReset: 'false'
        - inputFilterPeriod: '1'
        - compareValueStr: '0'
        - firstEdgeValueStr: '0'
        - dutyValueStr: '20%'
        - inversionControl: 'false'
        - faultControl: 'false'
        - deadtimeInsertion: 'false'
        - pwmSynchronization: 'true'
        - outputControlSettings:
          - channel1:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
          - channel2:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
        - interruptDmaSettings:
          - interruptDmaChan1: '0'
          - interruptDmaChan2: '0'
      - 1:
        - channelId: 'FTM0_CH1'
        - channelMode: 'edgeAlignedPwm'
        - complementaryMode: 'false'
        - channelNumber: '1'
        - level: '2'
        - secondLevel: '0'
        - activateDualEdge: 'false'
        - inputCaptureReset: 'false'
        - inputFilterPeriod: '1'
        - compareValueStr: '0'
        - firstEdgeValueStr: '0'
        - dutyValueStr: '0'
        - inversionControl: 'false'
        - deadtimeInsertion: 'false'
        - outputControlSettings:
          - channel1:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
          - channel2:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
        - interruptDmaSettings:
          - interruptDmaChan1: '0'
          - interruptDmaChan2: '0'
      - 2:
        - channelId: 'FTM0_CH2'
        - channelMode: 'edgeAlignedPwm'
        - complementaryMode: 'false'
        - channelNumber: '2'
        - level: '2'
        - secondLevel: '0'
        - activateDualEdge: 'false'
        - inputCaptureReset: 'false'
        - inputFilterPeriod: '1'
        - compareValueStr: '0'
        - firstEdgeValueStr: '0'
        - dutyValueStr: '0'
        - inversionControl: 'false'
        - faultControl: 'false'
        - deadtimeInsertion: 'false'
        - pwmSynchronization: 'true'
        - outputControlSettings:
          - channel1:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
          - channel2:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
        - interruptDmaSettings:
          - interruptDmaChan1: '0'
          - interruptDmaChan2: '0'
      - 3:
        - channelId: 'FTM0_CH4'
        - channelMode: 'edgeAlignedPwm'
        - complementaryMode: 'false'
        - channelNumber: '4'
        - level: '2'
        - secondLevel: '0'
        - activateDualEdge: 'false'
        - inputCaptureReset: 'false'
        - inputFilterPeriod: '1'
        - compareValueStr: '0'
        - firstEdgeValueStr: '0'
        - dutyValueStr: '0'
        - inversionControl: 'false'
        - faultControl: 'false'
        - deadtimeInsertion: 'false'
        - pwmSynchronization: 'true'
        - outputControlSettings:
          - channel1:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
          - channel2:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
        - interruptDmaSettings:
          - interruptDmaChan1: '0'
          - interruptDmaChan2: '0'
      - 4:
        - channelId: 'FTM0_CH5'
        - channelMode: 'edgeAlignedPwm'
        - complementaryMode: 'false'
        - channelNumber: '5'
        - level: '2'
        - secondLevel: '0'
        - activateDualEdge: 'false'
        - inputCaptureReset: 'false'
        - inputFilterPeriod: '1'
        - compareValueStr: '0'
        - firstEdgeValueStr: '0'
        - dutyValueStr: '0'
        - inversionControl: 'false'
        - deadtimeInsertion: 'false'
        - outputControlSettings:
          - channel1:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
          - channel2:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
        - interruptDmaSettings:
          - interruptDmaChan1: '0'
          - interruptDmaChan2: '0'
      - 5:
        - channelId: 'FTM0_CH6'
        - channelMode: 'edgeAlignedPwm'
        - complementaryMode: 'false'
        - channelNumber: '6'
        - level: '2'
        - secondLevel: '0'
        - activateDualEdge: 'false'
        - inputCaptureReset: 'false'
        - inputFilterPeriod: '1'
        - compareValueStr: '0'
        - firstEdgeValueStr: '0'
        - dutyValueStr: '0'
        - inversionControl: 'false'
        - faultControl: 'false'
        - deadtimeInsertion: 'false'
        - pwmSynchronization: 'true'
        - outputControlSettings:
          - channel1:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
          - channel2:
            - outputInitValue: '0'
            - maskOutput: 'false'
            - outputPolarity: '0'
            - swOutputControl: 'false'
            - swOutputValue: '0'
        - interruptDmaSettings:
          - interruptDmaChan1: '0'
          - interruptDmaChan2: '0'
    - ftm_params: []
    - channelParams:
      - 0: []
      - 1: []
      - 2: []
      - 3: []
      - 4: []
      - 5: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void FTM0_init(void) {
/****************************************************************************/
/* FTM peripheral global and channel modes initialization */
/****************************************************************************/
  if((FTM0->FMS & FTM_FMS_WPEN_MASK) != 0U)
  {
	/* Disable write protection */
    FTM0->MODE |= FTM_MODE_WPDIS_MASK;	
  }	
#ifdef FTM0_POL_INIT
  FTM0->POL = FTM0_POL_INIT & FTM0_OUT_INIT_MASK;
#else
  FTM0->POL = 0x0U;
#endif /*FTM0_POL_INIT*/
  /* Mask the channel output before the channel init. */
  FTM0->SYNC &= ~FTM_SYNC_SYNCHOM_MASK;
  FTM0->OUTMASK = FTM0_OUT_INIT_MASK;
  /* Disable the FTM counter */
  FTM0->SC = 0x0U;
  /* Disable the Quadrature mode first if select it */
#ifdef FTM0_QDCTRL_INIT
  FTM0->QDCTRL = 0x0U;
#endif /*FTM0_QDCTRL_INIT*/
#ifdef FTM0_MOD_INIT
  FTM0->MOD = FTM0_MOD_INIT;
#else
  FTM0->MOD = 0x0U;
#endif /*FTM0_MOD_INIT*/
#ifdef FTM0_CNTIN_INIT
  FTM0->CNTIN = FTM0_CNTIN_INIT;
#else
  FTM0->CNTIN = 0x0U;
#endif /*FTM0_CNTIN_INIT*/
#ifdef FTM0_COMBINE_INIT
  FTM0->COMBINE = FTM0_COMBINE_INIT & FTM0_COMBINE_INIT_MASK;
#else
  FTM0->COMBINE = 0x0U;
#endif /*FTM0_COMBINE_INIT*/
#ifdef FTM0_SC_INIT
  FTM0->SC = FTM0_SC_INIT & (~FTM_SC_CLKS_MASK);
#endif /*FTM0_SC_INIT*/
/****************************************************************************/
/* Channel 0 initialization */
/****************************************************************************/
#ifdef FTM0_C0SC_INIT
  FTM0->CONTROLS[0].CnSC = FTM0_C0SC_INIT;
#else
  FTM0->CONTROLS[0].CnSC = 0x0U;
#endif /*FTM0_C0SC_INIT */
#ifdef FTM0_C0V_INIT
  FTM0->CONTROLS[0].CnV = FTM0_C0V_INIT;
#else
  FTM0->CONTROLS[0].CnV = 0x0U;
#endif /*FTM0_C0V_INIT */

/****************************************************************************/
/* Channel 1 initialization */
/****************************************************************************/
#ifdef FTM0_C1SC_INIT
  FTM0->CONTROLS[1].CnSC = FTM0_C1SC_INIT;
#else
  FTM0->CONTROLS[1].CnSC = 0x0U;
#endif /*FTM0_C1SC_INIT */
#ifdef FTM0_C1V_INIT
  FTM0->CONTROLS[1].CnV = FTM0_C1V_INIT;
#else
  FTM0->CONTROLS[1].CnV = 0x0U;
#endif /*FTM0_C1V_INIT */

/****************************************************************************/
/* Channel 2 initialization */
/****************************************************************************/
#ifdef FTM0_C2SC_INIT
  FTM0->CONTROLS[2].CnSC = FTM0_C2SC_INIT;
#else
  FTM0->CONTROLS[2].CnSC = 0x0U;
#endif /*FTM0_C2SC_INIT */
#ifdef FTM0_C2V_INIT
  FTM0->CONTROLS[2].CnV = FTM0_C2V_INIT;
#else
  FTM0->CONTROLS[2].CnV = 0x0U;
#endif /*FTM0_C2V_INIT */

/****************************************************************************/
/* Channel 4 initialization */
/****************************************************************************/
#ifdef FTM0_C4SC_INIT
  FTM0->CONTROLS[4].CnSC = FTM0_C4SC_INIT;
#else
  FTM0->CONTROLS[4].CnSC = 0x0U;
#endif /*FTM0_C4SC_INIT */
#ifdef FTM0_C4V_INIT
  FTM0->CONTROLS[4].CnV = FTM0_C4V_INIT;
#else
  FTM0->CONTROLS[4].CnV = 0x0U;
#endif /*FTM0_C4V_INIT */

/****************************************************************************/
/* Channel 5 initialization */
/****************************************************************************/
#ifdef FTM0_C5SC_INIT
  FTM0->CONTROLS[5].CnSC = FTM0_C5SC_INIT;
#else
  FTM0->CONTROLS[5].CnSC = 0x0U;
#endif /*FTM0_C5SC_INIT */
#ifdef FTM0_C5V_INIT
  FTM0->CONTROLS[5].CnV = FTM0_C5V_INIT;
#else
  FTM0->CONTROLS[5].CnV = 0x0U;
#endif /*FTM0_C5V_INIT */

/****************************************************************************/
/* Channel 6 initialization */
/****************************************************************************/
#ifdef FTM0_C6SC_INIT
  FTM0->CONTROLS[6].CnSC = FTM0_C6SC_INIT;
#else
  FTM0->CONTROLS[6].CnSC = 0x0U;
#endif /*FTM0_C6SC_INIT */
#ifdef FTM0_C6V_INIT
  FTM0->CONTROLS[6].CnV = FTM0_C6V_INIT;
#else
  FTM0->CONTROLS[6].CnV = 0x0U;
#endif /*FTM0_C6V_INIT */

/****************************************************************************/
/* FTM peripheral global initialization */
/****************************************************************************/
#ifdef FTM0_MODE_INIT
  FTM0->MODE = FTM0_MODE_INIT & (~FTM_MODE_INIT_MASK);
#else
  FTM0->MODE = 0x0U;
#endif /*FTM0_MODE_INIT*/
#ifdef FTM0_DEADTIME_INIT
  FTM0->DEADTIME = FTM0_DEADTIME_INIT;
#else
  FTM0->DEADTIME = 0x0U;
#endif /*FTM0_DEADTIME_INIT*/
#ifdef FTM0_FLTCTRL_INIT
  FTM0->FLTCTRL = FTM0_FLTCTRL_INIT;
#else
  FTM0->FLTCTRL = 0x0U;
#endif /*FTM0_FLTCTRL_INIT*/
#ifdef FTM0_FLTPOL_INIT
  FTM0->FLTPOL = FTM0_FLTPOL_INIT;
#else
  FTM0->FLTPOL = 0x0U;
#endif /*FTM0_FLTPOL_INIT*/
#ifdef FTM0_EXTTRIG_INIT
  FTM0->EXTTRIG = FTM0_EXTTRIG_INIT;
#else
  FTM0->EXTTRIG = 0x0U;
#endif /*FTM0_EXTTRIG_INIT*/
#ifdef FTM0_FILTER_INIT
  FTM0->FILTER = FTM0_FILTER_INIT & FTM0_FILTER_INIT_MASK;
#else
  FTM0->FILTER = 0x0U;
#endif /*FTM0_FILTER_INIT*/
  /* Reset the FTM counter */
  FTM0->CNT = 0x1U;
#ifdef FTM0_QDCTRL_INIT
  FTM0->QDCTRL = FTM0_QDCTRL_INIT;
#else
  FTM0->QDCTRL = 0x0U;
#endif /*FTM0_QDCTRL_INIT*/
#ifdef FTM0_CONF_INIT
  FTM0->CONF = FTM0_CONF_INIT;
#else
  FTM0->CONF = 0x0U;
#endif /*FTM0_CONF_INIT*/
#ifdef FTM0_PWMLOAD_INIT
  FTM0->PWMLOAD = FTM0_PWMLOAD_INIT;
#else
  FTM0->PWMLOAD = 0x0U;
#endif /*FTM0_PWMLOAD_INIT*/
#ifdef FTM0_SYNC_INIT
  FTM0->SYNC = FTM0_SYNC_INIT;
#else
  FTM0->SYNC = 0x0U;
#endif /*FTM0_SYNC_INIT*/
#ifdef FTM0_SYNCONF_INIT
  FTM0->SYNCONF = FTM0_SYNCONF_INIT;
#else
  FTM0->SYNCONF = 0x0U;
#endif /*FTM0_SYNCONF_INIT*/
#ifdef FTM0_SWOCTRL_INIT
  FTM0->SWOCTRL = FTM0_SWOCTRL_INIT & (FTM0_OUT_INIT_MASK | (FTM0_OUT_INIT_MASK << FTM_SWOCTRL_CH0OCV_SHIFT));
#else
  FTM0->SWOCTRL = 0x0U;
#endif /*FTM0_SWOCTRL_INIT*/
#ifdef FTM0_INVCTRL_INIT
  FTM0->INVCTRL = FTM0_INVCTRL_INIT & FTM0_INVCTRL_INIT_MASK;
#else
  FTM0->INVCTRL = 0x0U;
#endif /*FTM0_INVCTRL_INIT*/
#ifdef FTM0_OUTINIT_INIT
  FTM0->OUTINIT = FTM0_OUTINIT_INIT & FTM0_OUT_INIT_MASK;
#else
  FTM0->OUTINIT = 0x0U;
#endif /*FTM0_OUTINIT_INIT*/
#ifdef FTM0_OUTMASK_INIT
  FTM0->OUTMASK = FTM0_OUTMASK_INIT & FTM0_OUT_INIT_MASK;
#else
  FTM0->OUTMASK = 0x0U;
#endif /*FTM0_OUTMASK_INIT*/
/* Initialize channel outputs */
#ifdef FTM_TEST_MODE_INIT
  FTM0->MODE |= FTM0_MODE_INIT & FTM_MODE_INIT_MASK;
#endif /*FTM_TEST_MODE_INIT*/
  /* Generate the Software Trigger */
  FTM0->SYNC |= FTM_SYNC_SWSYNC_MASK;
/* Enable the FTM counter */
#ifdef FTM0_START_TIMER_IN_INIT
  FTM0->SC |= FTM0_SC_INIT & FTM_SC_CLKS_MASK;
#else
  FTM0->SC &= ~FTM_SC_CLKS_MASK;
#endif
#ifdef FTM0_FMS_INIT
	/* Select enable write protection */
  FTM0->FMS = FTM0_FMS_INIT;
#endif /*FTM0_FMS_INIT*/
  /* Enable interrupt FTM0_IRQn request in the NVIC. */
  EnableIRQ(FTM0_IRQN);
}

/***********************************************************************************************************************
 * GPIOB initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPIOB'
- type: 'gpio'
- mode: 'GPIO'
- custom_name_enabled: 'false'
- type_id: 'gpio_5920c5e026e8e974e6dc54fbd5e22ad7'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPIOB'
- config_sets:
  - fsl_gpio:
    - enable_irq: 'false'
    - port_interrupt:
      - IRQn: 'PORTB_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void GPIOB_init(void) {
  /* Make sure, the clock gate for port B is enabled (e. g. in pin_mux.c) */
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
static void BOARD_InitPeripherals_CommonPreInit(void)
{
  /* Enable clock gate of the FTM0 peripheral. */
  SIM->SCGC6 |= SIM_SCGC6_FTM0_MASK;
}

void BOARD_InitPeripherals(void)
{
  /* Common pre-initialization */
  BOARD_InitPeripherals_CommonPreInit();
  /* Initialize components */
  FTM0_init();
  GPIOB_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
