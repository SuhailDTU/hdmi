################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../src/src/lscript.ld 

C_SRCS += \
../src/src/graphics.c \
../src/src/main.c 

OBJS += \
./src/src/graphics.o \
./src/src/main.o 

C_DEPS += \
./src/src/graphics.d \
./src/src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/src/%.o: ../src/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 gcc compiler'
	arm-none-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../hdmipixel_bsp/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


