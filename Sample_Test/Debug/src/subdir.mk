################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AllTests.cpp \
../src/FirstTest.cpp 

OBJS += \
./src/AllTests.o \
./src/FirstTest.o 

CPP_DEPS += \
./src/AllTests.d \
./src/FirstTest.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"H:\Users\Malone_Lab\Desktop\workspaces\git\cpputest/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


