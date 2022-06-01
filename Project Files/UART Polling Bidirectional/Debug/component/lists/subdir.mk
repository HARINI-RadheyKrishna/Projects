################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../component/lists/fsl_component_generic_list.c 

OBJS += \
./component/lists/fsl_component_generic_list.o 

C_DEPS += \
./component/lists/fsl_component_generic_list.d 


# Each subdirectory must supply rules for building sources it contributes
component/lists/%.o: ../component/lists/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_MKV31F512VLL12 -DCPU_MKV31F512VLL12_cm4 -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DSDK_DEBUGCONSOLE=1 -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/board" -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/source" -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/drivers" -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/component/serial_manager" -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/component/uart" -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/utilities" -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/component/lists" -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/CMSIS" -I"/home/harini/Desktop/Project code/Projects/Project Files/UART Polling Bidirectional/device" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


