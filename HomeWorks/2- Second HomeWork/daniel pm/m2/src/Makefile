
#------------------------------------------------------------------------------
# Simple make file to support two build platforms
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
# .asm = assembly file , .d = dependency , .i = pish pardazesh , .o = ovject 
#        
#
# Platform Overrides: HOST , MSP432
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides.
PLATFORM ?= HOST

# moshtareka ,esme general flags by alex
G_FLAGS = -std=c99 \
	  -g \
	  -O0 \
	  -Wall \
	  -Werror

# Architectures Specific Flags for MSP432.
LINKER_FILE = -T msp432p401r.lds
CPU = cortex-m4
ARCH = armv7e-m
SPECS = nosys.specs
EXTRA = -mthumb \
	-mfloat-abi=hard \
	-mfpu=fpv4-sp-d16


TARGET = c1m2 #name alex gofte 



ifeq ($(PLATFORM), MSP432)

        CC = arm-none-eabi-gcc
        LD = arm-none-eabi-ld
        CFLAGS = $(G_FLAGS) \
		 -mcpu=$(CPU) \
		 -march=$(ARCH) \
		 --specs=$(SPECS) \
		 $(EXTRA)
        CPPFLAGS = -DMSP432 $(INCLUDES)
        LDFLAGS = -Wl,-Map=$(TARGET).map \
		  -L ../ $(LINKER_FILE)
        OBJDUMP = arm-none-eabi-objdump
        SIZE = arm-none-eabi-size 

else ifeq ($(PLATFORM), HOST)

        CC = gcc
        LD = ld
        CFLAGS = $(G_FLAGS)
        CPPFLAGS = -DHOST $(INCLUDES)
        LDFLAGS = -Wl,-Map=$(TARGET).map
        OBJDUMP = objdump
        SIZE = size


endif

#build d asm o i
OBJS = $(SOURCES:.c=.o)
DEPS = $(SOURCES:.c=.d)
ASMS = $(SOURCES:.c=.asm)
PREP = $(SOURCES:.c=.i)

%.o : %.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@

%.asm: %.c
	$(CC) -S $< $(CFLAGS) $(CPPFLAGS) -o $@

%.i: %.c
	$(CC) -E $< $(CPPFLAGS) -o $@

%.d: %.c
	$(CC) -E -M $< $(CPPFLAGS) -o $@

$(TARGET).asm: $(TARGET).out
	$(OBJDUMP) -d $(TARGET).out >> $@


.PHONY: compile-all
compile-all: $(OBJS)

.PHONY: build
build: $(TARGET).out


$(TARGET).out: $(OBJS) $(DEPS)
	$(CC) $(OBJS) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@
	$(SIZE) $@

.PHONY: clean
clean:
	rm -f *.o *.i *.asm *.d  *.out $(TARGET).map
