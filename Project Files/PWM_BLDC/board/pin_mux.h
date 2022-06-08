/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*! @name PORTA2 (number 36), J9[6]/TRACE_SWO
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_TRACE_SWO_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_TRACE_SWO_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_TRACE_SWO_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTE24 (number 31), J2[2]/FTM0_CH0
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_FTM0_CH0_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define BOARD_FTM0_CH0_PIN 24U                   /*!<@brief PORT pin number */
#define BOARD_FTM0_CH0_PIN_MASK (1U << 24U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTC2 (number 72), J3[13]/FTM0_CH1
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_FTM0_CH1_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_FTM0_CH1_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_FTM0_CH1_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTA5 (number 39), J2[4]
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_FTM0_CH2_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_FTM0_CH2_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_FTM0_CH2_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTD4 (number 97), J3[7]/FTM0_CH4
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_FTM0_CH4_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_FTM0_CH4_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_FTM0_CH4_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTD5 (number 98), J3[5]/FTM0_CH5
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_FTM0_CH5_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_FTM0_CH5_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_FTM0_CH5_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTD6 (number 99), J2[6]/SPI0_PCS3/FTM0_CH6
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_FTM0_CH6_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_FTM0_CH6_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_FTM0_CH6_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTB1 (number 54), J2[18]/ADC0_SE9/I2C0_SDA
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_ADC0_SE9_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_ADC0_SE9_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_ADC0_SE9_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_ADC0_SE9_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_ADC0_SE9_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTB2 (number 55), J2[20]/ADC0_SE12/I2C0_SCL
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_ADC0_SE12_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_ADC0_SE12_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_ADC0_SE12_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_ADC0_SE12_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_ADC0_SE12_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTB10 (number 58), J2[19]/ADC1_SE14
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_ADC1_SE14_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define BOARD_ADC1_SE14_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_ADC1_SE14_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_ADC1_SE14_PIN 10U                   /*!<@brief PORT pin number */
#define BOARD_ADC1_SE14_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTE4 (number 5), SW3
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_SW3_GPIO GPIOE               /*!<@brief GPIO peripheral base pointer */
#define BOARD_SW3_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_SW3_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_SW3_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_SW3_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*! @name PORTA4 (number 38), SW2/NMI_b
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_SW2_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_SW2_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_SW2_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_SW2_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_SW2_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitBUTTONsPins(void);

#define PORT_DFER_DFE_1_MASK 0x02u /*!<@brief Digital Filter Enable Mask for item 1. */
#define PORT_DFER_DFE_7_MASK 0x80u /*!<@brief Digital Filter Enable Mask for item 7. */

/*! @name PORTE25 (number 32), D4[3]/LEDRGB_BLUE
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_BLUE_GPIO GPIOE                /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_BLUE_GPIO_PIN_MASK (1U << 25U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_LED_BLUE_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_BLUE_PIN 25U                   /*!<@brief PORT pin number */
#define BOARD_LED_BLUE_PIN_MASK (1U << 25U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTD1 (number 94), D4[1]/LEDRGB_RED
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_RED_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_RED_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_LED_RED_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_RED_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_LED_RED_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTD7 (number 100), D4[4]/LEDRGB_GREEN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_GREEN_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_GREEN_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_LED_GREEN_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_GREEN_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_LED_GREEN_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void);

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */

/*! @name PORTB16 (number 62), U7[4]/UART0_RX_TGTMCU
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_RX_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_RX_PIN 16U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_RX_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PORTB17 (number 63), U10[1]/UART0_TX_TGTMCU
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_TX_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_TX_PIN 17U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_TX_PIN_MASK (1U << 17U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

/*! @name ADC1_DP1 (number 16), RT1/THER_A
  @{ */
/* @} */

/*! @name ADC1_DM1 (number 17), RT1/THER_B
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitTHERPins(void);

#define PORT_DFER_DFE_0_MASK 0x01u /*!<@brief Digital Filter Enable Mask for item 0. */
#define PORT_DFER_DFE_2_MASK 0x04u /*!<@brief Digital Filter Enable Mask for item 2. */
#define PORT_DFER_DFE_3_MASK 0x08u /*!<@brief Digital Filter Enable Mask for item 3. */

/*! @name PORTD2 (number 95), U8[4]/I2C0_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_SCL_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_SCL_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_SCL_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTD3 (number 96), U8[6]/I2C0_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_SDA_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_SDA_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_SDA_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTC18 (number 92), U8[9]/Sensor_INT2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_ACCEL_INT2_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define BOARD_ACCEL_INT2_GPIO_PIN_MASK (1U << 18U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_INT2_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_INT2_PIN 18U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_INT2_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*! @name PORTD0 (number 93), U8[11]/INT1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_ACCEL_INT1_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define BOARD_ACCEL_INT1_GPIO_PIN_MASK (1U << 0U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_INT1_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_INT1_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_INT1_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void);

/*! @name PORTA18 (number 50), X501[1]/EXTAL0
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_EXTAL0_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_EXTAL0_PIN 18U                   /*!<@brief PORT pin number */
#define BOARD_EXTAL0_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTA19 (number 51), X501[3]/XTAL0
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_XTAL0_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_XTAL0_PIN 19U                   /*!<@brief PORT pin number */
#define BOARD_XTAL0_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSCPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
