################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/PWM_BLDC.c \
../source/semihost_hardfault.c 

OBJS += \
./source/PWM_BLDC.o \
./source/semihost_hardfault.o 

C_DEPS += \
./source/PWM_BLDC.d \
./source/semihost_hardfault.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_MKV31F512VLL12 -DCPU_MKV31F512VLL12_cm4 -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/board" -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/source" -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/drivers" -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/component/serial_manager" -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/component/uart" -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/utilities" -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/component/lists" -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/CMSIS" -I"/home/harini/Desktop/Project code/Projects/Project Files/PWM_BLDC/device" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


