/**
 * @file    UART_EDMA_Bidirectional_Exercise.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKV31F51212.h"
#include "fsl_debug_console.h"
/* TODO: insert other include files here. */

//#define UART1                   UART1
//#define UART2                   UART2
#define UART_CLOCK              kCLOCK_CoreSysClk
#define UART_CLK_FREQ           CLOCK_GetFreq(kCLOCK_CoreSysClk)
//#define UART1_TX_DMA_CHANNEL     0U
//#define UART1_RX_DMA_CHANNEL     1U
//#define UART2_TX_DMA_CHANNEL     3U
//#define UART2_RX_DMA_CHANNEL     2U
#define UART_DMAMUX_BASEADDR 	DMAMUX0
#define UART_DMA_BASEADDR    	DMA0
#define UART1_TX_DMA_REQUEST     kDmaRequestMux0UART1Tx
#define UART1_RX_DMA_REQUEST     kDmaRequestMux0UART1Rx
#define UART2_TX_DMA_REQUEST     kDmaRequestMux0UART2Tx
#define UART2_RX_DMA_REQUEST     kDmaRequestMux0UART2Rx
#define ECHO_BUFFER_LENGTH 5


/* TODO: insert other definitions and declarations here. */

void UART_UserCallback(UART_Type *base, uart_edma_handle_t *handle, status_t status, void *userData);
edma_config_t config;
uart_transfer_t sendXfer;
uart_transfer_t receiveXfer;
uart_config_t uartConfig1;
//uart_config_t uartConfig2;
uart_edma_handle_t g_uartEdmaHandle1;
edma_handle_t g_uartTxEdmaHandle1;
edma_handle_t g_uartRxEdmaHandle1;
uart_edma_handle_t g_uartEdmaHandle2;
edma_handle_t g_uartTxEdmaHandle2;
edma_handle_t g_uartRxEdmaHandle2;
uint8_t g_txBuffer[ECHO_BUFFER_LENGTH] = {1,2,3,4,5};
uint8_t g_rxBuffer[ECHO_BUFFER_LENGTH];

volatile bool rxBufferEmpty            = true;
volatile bool txBufferFull             = false;
volatile bool txOnGoing                = false;
volatile bool rxOnGoing                = false;
/*
 * @brief   Application entry point.
 */

void UART_UserCallback(UART_Type *base, uart_edma_handle_t *handle, status_t status, void *userData)
{
    userData = userData;

    if (kStatus_UART_TxIdle == status)
    {
        txBufferFull = false;
        txOnGoing    = false;
        //PRINTF("\nkStatus_UART_TxIdle\n");
    }

    if (kStatus_UART_RxIdle == status)
    {
        rxBufferEmpty = false;
        rxOnGoing     = false;
        //PRINTF("\nkStatus_UART_RxIdle\n");
    }
}


int main(void) {

	int a;


    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();

    UART_GetDefaultConfig(&uartConfig1);
    uartConfig1.baudRate_Bps = BOARD_DEBUG_UART_BAUDRATE;
    uartConfig1.enableTx     = true;
    uartConfig1.enableRx     = true;

//	UART_GetDefaultConfig(&uartConfig2);
//		uartConfig2.baudRate_Bps = BOARD_DEBUG_UART_BAUDRATE;
//		uartConfig2.enableTx     = true;
//		uartConfig2.enableRx     = true;

	UART_Init(UART1, &uartConfig1, UART_CLK_FREQ);

        /* Init DMAMUX */
        DMAMUX_Init(DMAMUX0);
        /* Set channel for UART */
        DMAMUX_SetSource(DMAMUX0, 0, UART1_TX_DMA_REQUEST);
        DMAMUX_SetSource(DMAMUX0, 1, UART1_RX_DMA_REQUEST);
        DMAMUX_SetSource(DMAMUX0, 2, UART2_TX_DMA_REQUEST);
        DMAMUX_SetSource(DMAMUX0, 3, UART2_RX_DMA_REQUEST);
        DMAMUX_EnableChannel(DMAMUX0, 0);
        DMAMUX_EnableChannel(DMAMUX0, 1);
        DMAMUX_EnableChannel(DMAMUX0, 3);
        DMAMUX_EnableChannel(DMAMUX0, 2);

        /* Init the EDMA module */
        EDMA_GetDefaultConfig(&config);
        EDMA_Init(DMA0, &config);
        EDMA_CreateHandle(&g_uartTxEdmaHandle1, DMA0, 0);
        EDMA_CreateHandle(&g_uartRxEdmaHandle1, DMA0, 1);
        EDMA_CreateHandle(&g_uartTxEdmaHandle2, DMA0, 2);
        EDMA_CreateHandle(&g_uartRxEdmaHandle2, DMA0, 3);

        /* Create UART DMA handle. */
        UART_TransferCreateHandleEDMA(UART1, &g_uartEdmaHandle1, UART_UserCallback, NULL, &g_uartTxEdmaHandle1,
                                      &g_uartRxEdmaHandle1);
        UART_TransferCreateHandleEDMA(UART2, &g_uartEdmaHandle2, UART_UserCallback, NULL, &g_uartTxEdmaHandle2,
                                              &g_uartRxEdmaHandle2);


	while (1)
	{
		sendXfer.data        = g_txBuffer;
		sendXfer.dataSize    = ECHO_BUFFER_LENGTH;


		                   txOnGoing = true;
		                   PRINTF("Transmitting the data");
		                   UART_SendEDMA(UART1, &g_uartEdmaHandle1, &sendXfer);


		                    for(int k=0;k<1000;k++){
		                    	asm("nop");
		                    }
		                    receiveXfer.data     = g_rxBuffer;
		                    receiveXfer.dataSize = ECHO_BUFFER_LENGTH;
		                    rxOnGoing = true;
		                    UART_ReceiveEDMA(UART2, &g_uartEdmaHandle2, &receiveXfer);

		                    for(int k=0;k<1000;k++){
		                    	asm("nop");
		                    }

		                    for(int j=0; j<ECHO_BUFFER_LENGTH; j++)
		                    {
		                    	PRINTF("%d-rx-%d\n",g_rxBuffer[j],j);
		                    }


	}



}
