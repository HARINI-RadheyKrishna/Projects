
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKV31F51212.h"
#include "fsl_debug_console.h"
#include "fsl_ftm.h"

void delay (void);

#define BOARD_FTM_BASEADDR1 FTM0
#define BOARD_FTM_CHANNEL_PAIR kFTM_Chnl_0
#define BOARD_FTM_CHANNEL_PAIR1 kFTM_Chnl_2
#define BOARD_FTM_CHANNEL_PAIR2 kFTM_Chnl_4

#define FTM_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_BusClk)
uint8_t dutycycle = 50U;


int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif
	ftm_config_t ftminitialisation;
	ftm_chnl_pwm_signal_param_t ftmParam[3];
    ftm_pwm_level_select_t pwmLevel = kFTM_LowTrue;

	ftmParam[0].chnlNumber = BOARD_FTM_CHANNEL_PAIR;
	ftmParam[0].dutyCyclePercent = dutycycle;
	ftmParam[0].level = pwmLevel;
	ftmParam[0].firstEdgeDelayPercent = 0U;
	ftmParam[0].enableComplementary = true;
	ftmParam[0].enableDeadtime = false;

	ftmParam[1].chnlNumber = BOARD_FTM_CHANNEL_PAIR1;
	ftmParam[1].dutyCyclePercent = dutycycle;
	ftmParam[1].level = pwmLevel;
	ftmParam[1].firstEdgeDelayPercent = 0U;
	ftmParam[1].enableComplementary = true;
	ftmParam[1].enableDeadtime = false;

	ftmParam[2].chnlNumber = BOARD_FTM_CHANNEL_PAIR2;
	ftmParam[2].dutyCyclePercent = dutycycle;
	ftmParam[2].level = pwmLevel;
	ftmParam[2].firstEdgeDelayPercent = 0U;
	ftmParam[2].enableComplementary = true;
	ftmParam[2].enableDeadtime = false;
	FTM_GetDefaultConfig(&ftminitialisation);
	FTM_Init(BOARD_FTM_BASEADDR1, &ftminitialisation);
	    	FTM_SetupPwm(BOARD_FTM_BASEADDR1, ftmParam, 3U, kFTM_CenterAlignedPwm, 10000U, FTM_SOURCE_CLOCK);
	    	FTM_StartTimer(BOARD_FTM_BASEADDR1, kFTM_SystemClock);
			while(1)
			{
	            FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR1, BOARD_FTM_CHANNEL_PAIR, kFTM_CenterAlignedPwm, dutycycle);
	            FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR1, BOARD_FTM_CHANNEL_PAIR1, kFTM_CenterAlignedPwm, dutycycle);
	            FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR1, BOARD_FTM_CHANNEL_PAIR2, kFTM_CenterAlignedPwm, dutycycle);

	            FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR1, (ftm_chnl_t)(BOARD_FTM_CHANNEL_PAIR), pwmLevel);
	            FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR1, (ftm_chnl_t)((BOARD_FTM_CHANNEL_PAIR) + 1), pwmLevel);
	            FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR1, (ftm_chnl_t)(BOARD_FTM_CHANNEL_PAIR1), pwmLevel);
	            FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR1, (ftm_chnl_t)((BOARD_FTM_CHANNEL_PAIR1) + 1), pwmLevel);
	            FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR1, (ftm_chnl_t)(BOARD_FTM_CHANNEL_PAIR2), pwmLevel);
	            FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR1, (ftm_chnl_t)((BOARD_FTM_CHANNEL_PAIR2) + 1), pwmLevel);

			}
	    return 0 ;



}
