################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Global.c \
../Core/Src/button.c \
../Core/Src/display7SEG.c \
../Core/Src/display7SEGLED.c \
../Core/Src/fsm_Automatic.c \
../Core/Src/fsm_Manual.c \
../Core/Src/fsm_setting.c \
../Core/Src/main.c \
../Core/Src/scheduler.c \
../Core/Src/scheduler_O1.c \
../Core/Src/scheduler_juststh.c \
../Core/Src/softwaretimer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/task.c 

OBJS += \
./Core/Src/Global.o \
./Core/Src/button.o \
./Core/Src/display7SEG.o \
./Core/Src/display7SEGLED.o \
./Core/Src/fsm_Automatic.o \
./Core/Src/fsm_Manual.o \
./Core/Src/fsm_setting.o \
./Core/Src/main.o \
./Core/Src/scheduler.o \
./Core/Src/scheduler_O1.o \
./Core/Src/scheduler_juststh.o \
./Core/Src/softwaretimer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/task.o 

C_DEPS += \
./Core/Src/Global.d \
./Core/Src/button.d \
./Core/Src/display7SEG.d \
./Core/Src/display7SEGLED.d \
./Core/Src/fsm_Automatic.d \
./Core/Src/fsm_Manual.d \
./Core/Src/fsm_setting.d \
./Core/Src/main.d \
./Core/Src/scheduler.d \
./Core/Src/scheduler_O1.d \
./Core/Src/scheduler_juststh.d \
./Core/Src/softwaretimer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/task.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

