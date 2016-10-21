cmake_minimum_required(VERSION 3.5.1)

set(CURRENT_MODULE_COMPILE_FLAGS )

set(CURRENT_MODULE_DEPENDENCIES
    arch/ARM_CM3
    drivers/STM32L1xx_Std_Periph
   )

set(CURRENT_MODULE_INC
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
   )

set(CURRENT_MODULE_OBJ
    
   )

set(CURRENT_MODULE_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/system_stm32l1xx.c
    ${CMAKE_CURRENT_SOURCE_DIR}/startup.S
   )

### Variables for substitution in startup_template.S
set(IRQ_TABLE_FILE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc/irqtable.h
   )

set(IRQ_HANDLERS_FILE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc/irqhandlers.h
   )

include(${BASE_DIR}/platform/stm32/common/ldconf.cmake)
include(${BASE_DIR}/platform/stm32/common/startupconf.cmake)
####################################################################################

# Create library
CREATE_FULL_MODULE()
