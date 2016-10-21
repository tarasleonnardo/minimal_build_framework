#ifndef H_PLATFORM_STM32_STM32L1XX_IRQHANDLERS_H_
#define H_PLATFORM_STM32_STM32L1XX_IRQHANDLERS_H_

.section .text

.type Default_Handler,%function; .thumb_func;

Default_Handler:
Infinite_Loop:
    b Infinite_Loop
.size Default_Handler, .-Default_Handler


.weak UnhandledFault_Handler
.thumb_set UnhandledFault_Handler,Default_Handler

.weak NMI_Handler
.thumb_set NMI_Handler,Default_Handler

.weak HardFault_Handler
.thumb_set HardFault_Handler,Default_Handler

.weak MemManage_Handler
.thumb_set MemManage_Handler,Default_Handler

.weak BusFault_Handler
.thumb_set BusFault_Handler,Default_Handler

.weak UsageFault_Handler
.thumb_set UsageFault_Handler,Default_Handler

.weak SVC_Handler
.thumb_set SVC_Handler,Default_Handler

.weak DebugMon_Handler
.thumb_set DebugMon_Handler,Default_Handler

.weak PendSV_Handler
.thumb_set PendSV_Handler,Default_Handler

.weak SysTick_Handler
.thumb_set SysTick_Handler,Default_Handler


.weak WWDG_IRQHandler
.thumb_set WWDG_IRQHandler,Default_Handler

.weak PVD_IRQHandler
.thumb_set PVD_IRQHandler,Default_Handler

.weak TAMP_STAMP_IRQHandler
.thumb_set TAMP_STAMP_IRQHandler,Default_Handler

.weak RTC_WKUP_IRQHandler
.thumb_set RTC_WKUP_IRQHandler,Default_Handler

.weak FLASH_IRQHandler
.thumb_set FLASH_IRQHandler,Default_Handler

.weak RCC_IRQHandler
.thumb_set RCC_IRQHandler,Default_Handler

.weak EXTI0_IRQHandler
.thumb_set EXTI0_IRQHandler,Default_Handler

.weak EXTI1_IRQHandler
.thumb_set EXTI1_IRQHandler,Default_Handler

.weak EXTI2_IRQHandler
.thumb_set EXTI2_IRQHandler,Default_Handler

.weak EXTI3_IRQHandler
.thumb_set EXTI3_IRQHandler,Default_Handler

.weak EXTI4_IRQHandler
.thumb_set EXTI4_IRQHandler,Default_Handler

.weak DMA1_Channel1_IRQHandler
.thumb_set DMA1_Channel1_IRQHandler,Default_Handler

.weak DMA1_Channel2_IRQHandler
.thumb_set DMA1_Channel2_IRQHandler,Default_Handler

.weak DMA1_Channel3_IRQHandler
.thumb_set DMA1_Channel3_IRQHandler,Default_Handler

.weak DMA1_Channel4_IRQHandler
.thumb_set DMA1_Channel4_IRQHandler,Default_Handler

.weak DMA1_Channel5_IRQHandler
.thumb_set DMA1_Channel5_IRQHandler,Default_Handler

.weak DMA1_Channel6_IRQHandler
.thumb_set DMA1_Channel6_IRQHandler,Default_Handler

.weak DMA1_Channel7_IRQHandler
.thumb_set DMA1_Channel7_IRQHandler,Default_Handler

.weak ADC_IRQHandler
.thumb_set ADC_IRQHandler,Default_Handler

.weak USB_HP_IRQHandler
.thumb_set USB_HP_IRQHandler,Default_Handler

.weak USB_LP_IRQHandler
.thumb_set USB_LP_IRQHandler,Default_Handler

.weak DAC_IRQHandler
.thumb_set DAC_IRQHandler,Default_Handler

.weak COMP_IRQHandler
.thumb_set COMP_IRQHandler,Default_Handler

.weak EXTI9_5_IRQHandler
.thumb_set EXTI9_5_IRQHandler,Default_Handler

.weak LCD_IRQHandler
.thumb_set LCD_IRQHandler,Default_Handler

.weak TIM9_IRQHandler
.thumb_set TIM9_IRQHandler,Default_Handler

.weak TIM10_IRQHandler
.thumb_set TIM10_IRQHandler,Default_Handler

.weak TIM11_IRQHandler
.thumb_set TIM11_IRQHandler,Default_Handler

.weak TIM2_IRQHandler
.thumb_set TIM2_IRQHandler,Default_Handler

.weak TIM3_IRQHandler
.thumb_set TIM3_IRQHandler,Default_Handler

.weak TIM4_IRQHandler
.thumb_set TIM4_IRQHandler,Default_Handler

.weak I2C1_EV_IRQHandler
.thumb_set I2C1_EV_IRQHandler,Default_Handler

.weak I2C1_ER_IRQHandler
.thumb_set I2C1_ER_IRQHandler,Default_Handler

.weak I2C2_EV_IRQHandler
.thumb_set I2C2_EV_IRQHandler,Default_Handler

.weak I2C2_ER_IRQHandler
.thumb_set I2C2_ER_IRQHandler,Default_Handler

.weak SPI1_IRQHandler
.thumb_set SPI1_IRQHandler,Default_Handler

.weak SPI2_IRQHandler
.thumb_set SPI2_IRQHandler,Default_Handler

.weak USART1_IRQHandler
.thumb_set USART1_IRQHandler,Default_Handler

.weak USART2_IRQHandler
.thumb_set USART2_IRQHandler,Default_Handler

.weak USART3_IRQHandler
.thumb_set USART3_IRQHandler,Default_Handler

.weak EXTI15_10_IRQHandler
.thumb_set EXTI15_10_IRQHandler,Default_Handler

.weak RTC_Alarm_IRQHandler
.thumb_set RTC_Alarm_IRQHandler,Default_Handler

.weak USB_FS_WKUP_IRQHandler
.thumb_set USB_FS_WKUP_IRQHandler,Default_Handler

.weak TIM6_IRQHandler
.thumb_set TIM6_IRQHandler,Default_Handler

#ifdef STM32L1XX_MD
.weak TIM7_IRQHandler
.thumb_set TIM7_IRQHandler,Default_Handler
#endif

#ifdef STM32L1XX_MDP
.weak TIM7_IRQHandler
.thumb_set TIM7_IRQHandler,Default_Handler

.weak TIM5_IRQHandler
.thumb_set TIM5_IRQHandler,Default_Handler

.weak SPI3_IRQHandler
.thumb_set SPI3_IRQHandler,Default_Handler

.weak DMA2_Channel1_IRQHandler
.thumb_set DMA2_Channel1_IRQHandler,Default_Handler

.weak DMA2_Channel2_IRQHandler
.thumb_set DMA2_Channel2_IRQHandler,Default_Handler

.weak DMA2_Channel3_IRQHandler
.thumb_set DMA2_Channel3_IRQHandler,Default_Handler

.weak DMA2_Channel4_IRQHandler
.thumb_set DMA2_Channel4_IRQHandler,Default_Handler

.weak DMA2_Channel5_IRQHandler
.thumb_set DMA2_Channel5_IRQHandler,Default_Handler

.weak AES_IRQHandler
.thumb_set AES_IRQHandler,Default_Handler

.weak COMP_ACQ_IRQHandler
.thumb_set COMP_ACQ_IRQHandler,Default_Handler
#endif

#ifdef STM32L1XX_HD
.weak TIM7_IRQHandler
.thumb_set TIM7_IRQHandler,Default_Handler

.weak SDIO_IRQHandler
.thumb_set SDIO_IRQHandler,Default_Handler

.weak TIM5_IRQHandler
.thumb_set TIM5_IRQHandler,Default_Handler

.weak SPI3_IRQHandler
.thumb_set SPI3_IRQHandler,Default_Handler

.weak UART4_IRQHandler
.thumb_set UART4_IRQHandler,Default_Handler

.weak UART5_IRQHandler
.thumb_set UART5_IRQHandler,Default_Handler

.weak DMA2_Channel1_IRQHandler
.thumb_set DMA2_Channel1_IRQHandler,Default_Handler

.weak DMA2_Channel2_IRQHandler
.thumb_set DMA2_Channel2_IRQHandler,Default_Handler

.weak DMA2_Channel3_IRQHandler
.thumb_set DMA2_Channel3_IRQHandler,Default_Handler

.weak DMA2_Channel4_IRQHandler
.thumb_set DMA2_Channel4_IRQHandler,Default_Handler

.weak DMA2_Channel5_IRQHandler
.thumb_set DMA2_Channel5_IRQHandler,Default_Handler

.weak AES_IRQHandler
.thumb_set AES_IRQHandler,Default_Handler

.weak COMP_ACQ_IRQHandler
.thumb_set COMP_ACQ_IRQHandler,Default_Handler
#endif

#ifdef STM32L1XX_XL
.weak TIM7_IRQHandler
.thumb_set TIM7_IRQHandler,Default_Handler

.weak TIM5_IRQHandler
.thumb_set TIM5_IRQHandler,Default_Handler

.weak SPI3_IRQHandler
.thumb_set SPI3_IRQHandler,Default_Handler

.weak UART4_IRQHandler
.thumb_set UART4_IRQHandler,Default_Handler

.weak UART5_IRQHandler
.thumb_set UART5_IRQHandler,Default_Handler

.weak DMA2_Channel1_IRQHandler
.thumb_set DMA2_Channel1_IRQHandler,Default_Handler

.weak DMA2_Channel2_IRQHandler
.thumb_set DMA2_Channel2_IRQHandler,Default_Handler

.weak DMA2_Channel3_IRQHandler
.thumb_set DMA2_Channel3_IRQHandler,Default_Handler

.weak DMA2_Channel4_IRQHandler
.thumb_set DMA2_Channel4_IRQHandler,Default_Handler

.weak DMA2_Channel5_IRQHandler
.thumb_set DMA2_Channel5_IRQHandler,Default_Handler

.weak AES_IRQHandler
.thumb_set AES_IRQHandler,Default_Handler

.weak COMP_ACQ_IRQHandler
.thumb_set COMP_ACQ_IRQHandler,Default_Handler
#endif

#endif /* !H_PLATFORM_STM32_STM32L1XX_IRQHANDLERS_H_ */
