################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Costos.c \
../src/Jugadores.c \
../src/TP1.c 

C_DEPS += \
./src/Costos.d \
./src/Jugadores.d \
./src/TP1.d 

OBJS += \
./src/Costos.o \
./src/Jugadores.o \
./src/TP1.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Costos.d ./src/Costos.o ./src/Jugadores.d ./src/Jugadores.o ./src/TP1.d ./src/TP1.o

.PHONY: clean-src

