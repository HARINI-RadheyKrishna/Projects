/*
 * Copyright 2016-2022 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file    UART Polling Bidirectional.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKV31F51212.h"
#include "fsl_debug_console.h"
#include "fsl_uart.h"

/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */
#define DEMO_UART1          UART1
#define DEMO_UART1_CLKSRC   kCLOCK_CoreSysClk
#define DEMO_UART1_CLK_FREQ CLOCK_GetFreq(kCLOCK_CoreSysClk)

#define DEMO_UART2          UART2
#define DEMO_UART2_CLKSRC   kCLOCK_CoreSysClk
#define DEMO_UART2_CLK_FREQ CLOCK_GetFreq(kCLOCK_CoreSysClk)


uint8_t txbuff[] = {"This is an initializing statement"};
//static uint8_t rxbuff[] = {};
uint32_t count;

void delay (void)
{
	for (int i=0; i<= 2000; i++)
		__asm volatile ("NOP");
}
/*
 * @brief   Application entry point.
 */

int main(void) {

    //uint8_t ch;
    uart_config_t config1;
    uart_config_t config2;
    /* Init board hardware. */

    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

uint8_t a;
    UART_GetDefaultConfig(&config1);
       config1.baudRate_Bps = BOARD_DEBUG_UART_BAUDRATE;
       config1.enableTx     = true;
       config1.enableRx     = true;

       UART_GetDefaultConfig(&config2);
       config2.baudRate_Bps = BOARD_DEBUG_UART_BAUDRATE;
       config2.enableTx     = true;
       config2.enableRx     = true;

       UART_Init(DEMO_UART1, &config1, DEMO_UART1_CLK_FREQ);
       UART_Init(DEMO_UART2, &config2, DEMO_UART2_CLK_FREQ);

       UART_WriteBlocking(DEMO_UART1, txbuff, sizeof(txbuff) - 1);
       delay();
       while (1)

       {
    	  // UART_ReadBlocking(DEMO_UART, rxbuff, 10);
    	           	   {
    	             	  UART_ReadBlocking(DEMO_UART2, &a, 1);
    	             	  delay();
    	             	  UART_WriteBlocking(DEMO_UART1, &a, 1);
    	             	  //printf("%d\n", a);
    	           	   }


}
}
