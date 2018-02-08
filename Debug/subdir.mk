################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AGContreStratFixe.cpp \
../AGNoStrat.cpp \
../AlgoGenetique.cpp \
../AlgoGenetiqueTDJ.cpp \
../GeneFloat.cpp \
../IndividuTDJ.cpp \
../Jeu.cpp \
../StrategieEvo.cpp 

OBJS += \
./AGContreStratFixe.o \
./AGNoStrat.o \
./AlgoGenetique.o \
./AlgoGenetiqueTDJ.o \
./GeneFloat.o \
./IndividuTDJ.o \
./Jeu.o \
./StrategieEvo.o 

CPP_DEPS += \
./AGContreStratFixe.d \
./AGNoStrat.d \
./AlgoGenetique.d \
./AlgoGenetiqueTDJ.d \
./GeneFloat.d \
./IndividuTDJ.d \
./Jeu.d \
./StrategieEvo.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


