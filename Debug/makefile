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
Countupdown_usingSSM.lss \

FLASH_IMAGE += \
Countupdown_usingSSM.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Countupdown_usingSSM.elf secondary-outputs

# Tool invocations
Countupdown_usingSSM.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Countupdown_usingSSM.map -mmcu=atmega32 -o "Countupdown_usingSSM.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Countupdown_usingSSM.lss: Countupdown_usingSSM.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Countupdown_usingSSM.elf  >"Countupdown_usingSSM.lss"
	@echo 'Finished building: $@'
	@echo ' '

Countupdown_usingSSM.hex: Countupdown_usingSSM.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Countupdown_usingSSM.elf  "Countupdown_usingSSM.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Countupdown_usingSSM.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Countupdown_usingSSM.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Countupdown_usingSSM.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
