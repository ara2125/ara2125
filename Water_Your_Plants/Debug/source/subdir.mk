################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/lcd.c \
../source/main.c \
../source/mtb.c \
../source/semihost_hardfault.c \
../source/utils.c 

C_DEPS += \
./source/lcd.d \
./source/main.d \
./source/mtb.d \
./source/semihost_hardfault.d \
./source/utils.d 

OBJS += \
./source/lcd.o \
./source/main.o \
./source/mtb.o \
./source/semihost_hardfault.o \
./source/utils.o 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_MKL46Z256VLL4_cm0plus -DCPU_MKL46Z256VLL4 -DFRDM_KL46Z -DFREEDOM -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\source" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\CMSIS" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\drivers" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\startup" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\utilities" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\board\src" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\board" -O0 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-source

clean-source:
	-$(RM) ./source/lcd.d ./source/lcd.o ./source/main.d ./source/main.o ./source/mtb.d ./source/mtb.o ./source/semihost_hardfault.d ./source/semihost_hardfault.o ./source/utils.d ./source/utils.o

.PHONY: clean-source

