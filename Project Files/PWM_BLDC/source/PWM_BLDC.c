
/**
 * @file    PWM_BLDC.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKV31F51212.h"
#include "fsl_debug_console.h"
#include "fsl_ftm.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "fsl_common.h"

/* TODO: insert other include files here. */
//#define INPUT 20

/* TODO: insert other definitions and declarations here. */
void delay (void)
{
for (int i; i<1000; i++)
	__asm volatile ("NOP");
}


#define BOARD_FTM_BASEADDR FTM0
#define FTM_Channel_0		kFTM_Chnl_0
#define FTM_Channel_1		kFTM_Chnl_1
#define FTM_Channel_2		kFTM_Chnl_2
#define FTM_Channel_4		kFTM_Chnl_4
#define FTM_Channel_5		kFTM_Chnl_5
#define FTM_Channel_6		kFTM_Chnl_6


#define FTM_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_BusClk)
uint8_t dutycycle = 50U; //20 percent on -> dutycycle
uint8_t invert = 0U;
uint8_t g_SignalOne, g_SignalTwo, g_SignalThree;
uint8_t  g_d1, g_d2, g_d4, g_d5, g_d6;
uint8_t g_d0;


ftm_config_t ftminitialisation;
ftm_chnl_pwm_signal_param_t ftmParam[6];
ftm_pwm_level_select_t pwmLevel = kFTM_HighTrue;
ftm_pwm_mode_t PwmMode = kFTM_EdgeAlignedPwm;
gpio_pin_config_t configPin;
volatile bool g_ButtonPress = false;

/*
 * @brief   Application entry point.
 *
 *
 *
 */

void UpdateInput (void)
{


    g_SignalOne = GPIO_PinRead(GPIOB, 1);
    g_SignalTwo = GPIO_PinRead(GPIOB, 10);
    g_SignalThree = GPIO_PinRead(GPIOB, 2);

    if ((g_SignalOne == 0)&& (g_SignalTwo == 0) && (g_SignalThree == 1))
    				{
        	        g_d0 = dutycycle;
        	        g_d1 = invert;
        	        g_d2 = invert;
        	        g_d4 = invert;
        	        g_d5 = invert;
        	        g_d6 = dutycycle;
    				//printf("Running 0\n 0 -%d 1 - %d 2- %d 4 - %d 5 - %d 6 - %d", g_d0, g_d1, g_d2, g_d4, g_d5, g_d6);
    				}

    else if ((g_SignalOne == 0)&& (g_SignalTwo == 1) && (g_SignalThree == 0))
    				{
    	    	        g_d0 = invert;
    	    	        g_d1 = dutycycle;
    	    	        g_d2 = invert;
    	    	        g_d4 = dutycycle;
    	    	        g_d5 = invert;
    	    	        g_d6 = invert;
    					//printf("Running 1\n 0 -%d 1 - %d 2- %d 4 - %d 5 - %d 6 - %d", g_d0, g_d1, g_d2, g_d4, g_d5, g_d6);

    				}

    else if ((g_SignalOne == 0)&& (g_SignalTwo == 1) && (g_SignalThree == 1))
    				{
    	    	        g_d0 = invert;
    	    	        g_d1 = dutycycle;
    	    	        g_d2 = invert;
    	    	        g_d4 = invert;
    	    	        g_d5 = invert;
    	    	        g_d6 = dutycycle;
    					//printf("Running 2\n 0 -%d 1 - %d 2- %d 4 - %d 5 - %d 6 - %d", g_d0, g_d1, g_d2, g_d4, g_d5, g_d6);
    				}

    else if ((g_SignalOne == 1)&& (g_SignalTwo == 0) && (g_SignalThree == 0))
    				{
    	    	        g_d0 = invert;
    	    	        g_d1 = invert;
    	    	        g_d2 = dutycycle;
    	    	        g_d4 = invert;
    	    	        g_d5 = dutycycle;
    	    	        g_d6 = invert;
    	    			//FTM_SetSoftwareTrigger(BOARD_FTM_BASEADDR, true);
    					//printf("Running 4\n 0 -%d 1 - %d 2- %d 4 - %d 5 - %d 6 - %d", g_d0, g_d1, g_d2, g_d4, g_d5, g_d6);
    				}

    else if ((g_SignalOne == 1)&& (g_SignalTwo == 0) && (g_SignalThree == 1))
    				{
    	    	        g_d0 = dutycycle;
    	    	        g_d1 = invert;
    	    	        g_d2 = invert;
    	    	        g_d4 = invert;
    	    	        g_d5 = dutycycle;
    	    	        g_d6 = invert;
    					//printf("Running 5\n 0 -%d 1 - %d 2- %d 4 - %d 5 - %d 6 - %d", g_d0, g_d1, g_d2, g_d4, g_d5, g_d6);
    				}

    else if ((g_SignalOne == 1)&& (g_SignalTwo == 1) && (g_SignalThree == 0))
    				{
    	    	        g_d0 = invert;
    	    	        g_d1 = invert;
    	    	        g_d2 = dutycycle;
    	    	        g_d4 = dutycycle;
    	    	        g_d5 = invert;
    	    	        g_d6 = invert;
    	    			//FTM_SetSoftwareTrigger(BOARD_FTM_BASEADDR, true);

    					//printf("Running 6\n 0 -%d 1 - %d 2- %d 4 - %d 5 - %d 6 - %d", g_d0, g_d1, g_d2, g_d4, g_d5, g_d6);
    				}
    else
    				{
    				__asm ("NOP");
    				}

    delay();
    return;

}

/* FTM0_IRQn interrupt handler */
void FTM0_IRQHANDLER(void) {
  uint32_t intStatus;
  /* Reading all interrupt flags of status registers - for example from the FTM0->SC, FTM0->FMS, FTM0->EXTTRIG, FTM0->STATUS */
  /* Clear the status flags */
  /* Code example: */
  intStatus = FTM0->STATUS & (FTM_STATUS_CH0F_MASK | FTM_STATUS_CH1F_MASK); /* mask of channel #0 and #1 */
  FTM0->STATUS = 0;

  /* Place your code here */
  g_ButtonPress = true;


  /* Add for ARM errata 838869, affects Cortex-M4, Cortex-M4F
     Store immediate overlapping exception return operation might vector to incorrect interrupt. */
  #if defined __CORTEX_M && (__CORTEX_M == 4U)
    __DSB();
  #endif
}


int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
    //FTM0_SYNC_INIT;
    //FTM0_SYNCONF_INIT;
    //FTM0_PWMLOAD_INIT;

#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

        GPIO_PinInit(GPIOB, 1, &configPin);
        GPIO_PinInit(GPIOB, 2, &configPin);
        GPIO_PinInit(GPIOB, 10, &configPin);

    	ftmParam[0].chnlNumber = FTM_Channel_0;
    	ftmParam[0].dutyCyclePercent = invert;
    	ftmParam[0].level = pwmLevel;
    	ftmParam[0].firstEdgeDelayPercent = 0U;
    	ftmParam[0].enableComplementary = false;
    	ftmParam[0].enableDeadtime = false;

    	ftmParam[1].chnlNumber = FTM_Channel_1;
    	ftmParam[1].dutyCyclePercent = invert;
    	ftmParam[1].level = pwmLevel;
    	ftmParam[1].firstEdgeDelayPercent = 0U;
    	ftmParam[1].enableComplementary = false;
    	ftmParam[1].enableDeadtime = false;

    	ftmParam[2].chnlNumber = FTM_Channel_2;
    	ftmParam[2].dutyCyclePercent = invert;
    	ftmParam[2].level = pwmLevel;
    	ftmParam[2].firstEdgeDelayPercent = 0U;
    	ftmParam[2].enableComplementary = false;
    	ftmParam[2].enableDeadtime = false;

    	ftmParam[3].chnlNumber = FTM_Channel_4;
		ftmParam[3].dutyCyclePercent = invert;
		ftmParam[3].level = pwmLevel;
		ftmParam[3].firstEdgeDelayPercent = 0U;
		ftmParam[3].enableComplementary = false;
		ftmParam[3].enableDeadtime = false;

    	ftmParam[4].chnlNumber = FTM_Channel_5;
		ftmParam[4].dutyCyclePercent = invert;
		ftmParam[4].level = pwmLevel;
		ftmParam[4].firstEdgeDelayPercent = 0U;
		ftmParam[4].enableComplementary = false;
		ftmParam[4].enableDeadtime = false;

    	ftmParam[5].chnlNumber = FTM_Channel_6;
		ftmParam[5].dutyCyclePercent = invert;
		ftmParam[5].level = pwmLevel;
		ftmParam[5].firstEdgeDelayPercent = 0U;
		ftmParam[5].enableComplementary = false;
		ftmParam[5].enableDeadtime = false;


    	FTM_GetDefaultConfig(&ftminitialisation);
    	FTM_Init(BOARD_FTM_BASEADDR, &ftminitialisation);
		FTM_SetupPwm(BOARD_FTM_BASEADDR, ftmParam, 6U, kFTM_EdgeAlignedPwm, 30000U, FTM_SOURCE_CLOCK);
		FTM_StartTimer(BOARD_FTM_BASEADDR, FTM_SOURCE_CLOCK);
//		FTM0_EXTTRIG_INIT;

		g_SignalOne = GPIO_PinRead(GPIOB, 1);
		g_SignalTwo = GPIO_PinRead(GPIOB, 10);
		g_SignalThree = GPIO_PinRead(GPIOB, 2);

//        printf("SignalOne - %d\n", g_SignalOne);
//        printf("SignalTwo - %d\n", g_SignalTwo);
//        printf("SignalThree - %d\n", g_SignalThree);
//		FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_0, PwmMode, dutycycle);
//		FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_1, PwmMode, dutycycle);
//		FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_2, PwmMode, dutycycle);
//		FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_4, PwmMode, dutycycle);
//		FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_5, PwmMode, dutycycle);
//		FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_6, PwmMode, dutycycle);
		FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR, FTM_Channel_0, pwmLevel);
		FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR, FTM_Channel_1, pwmLevel);
		FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR, FTM_Channel_2, pwmLevel);
		FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR, FTM_Channel_4, pwmLevel);
		FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR, FTM_Channel_5, pwmLevel);
		FTM_UpdateChnlEdgeLevelSelect(BOARD_FTM_BASEADDR, FTM_Channel_6, pwmLevel);
//		FTM_EnableInterrupts(BOARD_FTM_BASEADDR, 0x77);



		while(1)
		{
			FTM_EnableInterrupts(BOARD_FTM_BASEADDR, 0x77);

  	  	  	if (g_ButtonPress)
  	  	  	{

  	  	  	UpdateInput ();

			FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_0, PwmMode, g_d0);
			FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_1, PwmMode, g_d1);
			FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_2, PwmMode, g_d2);
			FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_4, PwmMode, g_d4);
			FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_5, PwmMode, g_d5);
			FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR, FTM_Channel_6, PwmMode, g_d6);
			FTM_SetSoftwareTrigger(BOARD_FTM_BASEADDR, true);
  	  	  	g_ButtonPress = false;


//  	  	  	while(FTM0->STATUS = 0)
//  	  	  	{
//  	  	  		__asm ("NOP");
//  	  	  	}
  	  	  	}
  	  	  	else
  	  	  	{
  	  	  		__asm ("NOP");
  	  	  	}
  	  	  	FTM_DisableInterrupts(BOARD_FTM_BASEADDR, 0x00);
  	  	  	delay();
		}


    return 0 ;
}
