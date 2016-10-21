#ifndef H_PLATFORM_STM32_STM32L1XX_IRQTABLE_H_
#define H_PLATFORM_STM32_STM32L1XX_IRQTABLE_H_

.word   WWDG_IRQHandler                   // Window WatchDog
.word   PVD_IRQHandler                    // PVD through EXTI Line detection
.word   TAMP_STAMP_IRQHandler             // Tamper and TimeStamps through the EXTI line
.word   RTC_WKUP_IRQHandler               // RTC Wakeup through the EXTI line
.word   FLASH_IRQHandler                  // FLASH
.word   RCC_IRQHandler                    // RCC
.word   EXTI0_IRQHandler                  // EXTI Line0
.word   EXTI1_IRQHandler                  // EXTI Line1
.word   EXTI2_IRQHandler                  // EXTI Line2
.word   EXTI3_IRQHandler                  // EXTI Line3
.word   EXTI4_IRQHandler                  // EXTI Line4
.word   DMA1_Channel1_IRQHandler          // DMA1 Channel 1
.word   DMA1_Channel2_IRQHandler          // DMA1 Channel 2
.word   DMA1_Channel3_IRQHandler          // DMA1 Channel 3
.word   DMA1_Channel4_IRQHandler          // DMA1 Channel 4
.word   DMA1_Channel5_IRQHandler          // DMA1 Channel 5
.word   DMA1_Channel6_IRQHandler          // DMA1 Channel 6
.word   DMA1_Channel7_IRQHandler          // DMA1 Channel 7

.word   ADC_IRQHandler                    // ADC1
.word   USB_HP_IRQHandler                 // USB High Priority
.word   USB_LP_IRQHandler                 // USB Low Priority
.word   DAC_IRQHandler                    // DAC
.word   COMP_IRQHandler                   // COMP through EXTI
.word   EXTI9_5_IRQHandler                // External Line[9:5]
.word   LCD_IRQHandler                    // LCD
.word   TIM9_IRQHandler                   // TIM9
.word   TIM10_IRQHandler                  // TIM10
.word   TIM11_IRQHandler                  // TIM11
.word   TIM2_IRQHandler                   // TIM2
.word   TIM3_IRQHandler                   // TIM3
.word   TIM4_IRQHandler                   // TIM4
.word   I2C1_EV_IRQHandler                // I2C1 Event
.word   I2C1_ER_IRQHandler                // I2C1 Error
.word   I2C2_EV_IRQHandler                // I2C2 Event
.word   I2C2_ER_IRQHandler                // I2C2 Error
.word   SPI1_IRQHandler                   // SPI1
.word   SPI2_IRQHandler                   // SPI2
.word   USART1_IRQHandler                 // USART1
.word   USART2_IRQHandler                 // USART2
.word   USART3_IRQHandler                 // USART3
.word   EXTI15_10_IRQHandler              // External Line[15:10]
.word   RTC_Alarm_IRQHandler              // RTC Alarm through EXTI Line
.word   USB_FS_WKUP_IRQHandler            // USB FW Wakeup from suspend though EXTI
.word   TIM6_IRQHandler                   // TIM6

#ifdef STM32L1XX_MD
.word   TIM7_IRQHandler                   // TIM7
#endif

#ifdef STM32L1XX_MDP
.word   TIM7_IRQHandler                   // TIM7
.word   TIM5_IRQHandler                   // TIM5
.word   SPI3_IRQHandler                   // SPI3
.word   DMA2_Channel1_IRQHandler          // DMA2 Channel 1
.word   DMA2_Channel2_IRQHandler          // DMA2 Channel 2
.word   DMA2_Channel3_IRQHandler          // DMA2 Channel 3
.word   DMA2_Channel4_IRQHandler          // DMA2 Channel 4
.word   DMA2_Channel5_IRQHandler          // DMA2 Channel 5
.word   AES_IRQHandler                    // AES
.word   COMP_ACQ_IRQHandler               // COMP Channel Acquisition
#endif

#ifdef STM32L1XX_HD
.word   TIM7_IRQHandler                   // TIM7
.word   SDIO_IRQHandler                   // SDIO
.word   TIM5_IRQHandler                   // TIM5
.word   SPI3_IRQHandler                   // SPI3
.word   UART4_IRQHandler                  // UART4
.word   UART5_IRQHandler                  // UART5
.word   DMA2_Channel1_IRQHandler          // DMA2 Channel 1
.word   DMA2_Channel2_IRQHandler          // DMA2 Channel 2
.word   DMA2_Channel3_IRQHandler          // DMA2 Channel 3
.word   DMA2_Channel4_IRQHandler          // DMA2 Channel 4
.word   DMA2_Channel5_IRQHandler          // DMA2 Channel 5
.word   AES_IRQHandler                    // AES
.word   COMP_ACQ_IRQHandler               // COMP Channel Acquisition
#endif

#ifdef STM32L1XX_XL
.word   TIM7_IRQHandler                   // TIM7
.word   TIM5_IRQHandler                   // TIM5
.word   SPI3_IRQHandler                   // SPI3
.word   UART4_IRQHandler                  // UART4
.word   UART5_IRQHandler                  // UART5
.word   DMA2_Channel1_IRQHandler          // DMA2 Channel 1
.word   DMA2_Channel2_IRQHandler          // DMA2 Channel 2
.word   DMA2_Channel3_IRQHandler          // DMA2 Channel 3
.word   DMA2_Channel4_IRQHandler          // DMA2 Channel 4
.word   DMA2_Channel5_IRQHandler          // DMA2 Channel 5
.word   AES_IRQHandler                    // AES
.word   COMP_ACQ_IRQHandler               // COMP Channel Acquisition
#endif

#endif /* !H_PLATFORM_STM32_STM32L1XX_IRQTABLE_H_ */

