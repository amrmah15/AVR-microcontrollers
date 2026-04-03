################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
project_recierve.lss \

FLASH_IMAGE += \
project_recierve.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: project_recierve.elf secondary-outputs

# Tool invocations
project_recierve.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,project_recierve.map -mmcu=atmega32 -o "project_recierve.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

project_recierve.lss: project_recierve.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S project_recierve.elf  >"project_recierve.lss"
	@echo 'Finished building: $@'
	@echo ' '

project_recierve.hex: project_recierve.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex project_recierve.elf  "project_recierve.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: project_recierve.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 project_recierve.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) project_recierve.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
