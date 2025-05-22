################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../board/src/board.c \
../board/src/clock_config.c 

C_DEPS += \
./board/src/board.d \
./board/src/clock_config.d 

OBJS += \
./board/src/board.o \
./board/src/clock_config.o 


# Each subdirectory must supply rules for building sources it contributes
board/src/%.o: ../board/src/%.c board/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_MKL46Z256VLL4_cm0plus -DCPU_MKL46Z256VLL4 -DFRDM_KL46Z -DFREEDOM -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\source" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\CMSIS" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\drivers" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\startup" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\utilities" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\board\src" -I"C:\Users\seech\Documents\MCUXpressoIDE_11.7.1_9221\workspace\FINAL\board" -O0 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-board-2f-src

clean-board-2f-src:
	-$(RM) ./board/src/board.d ./board/src/board.o ./board/src/clock_config.d ./board/src/clock_config.o

.PHONY: clean-board-2f-src

