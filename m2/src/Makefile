#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make build PLATFORM=MSP432
#      make build PLATFORM=HOST
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk
#Variables:
FLAGS = -Wall \
	-Werror \
	-g \
	-O0 \
	-std=c99 

NAME = c1m2
# Platform Overrides
PLATFORM = ?=HOST
# Architectures Specific Flags
LINKER_FILE = -T msp432p401r.lds
CPU = cortex-m4
ARCH = armv7e-m
SPECS = nosys.specs
OTHERS = -mthumb \
	-mfloat-abi=hard \
	-mfpu=fpv4-sp-d16
	 


# Compiler Flags and Defines
#we define each of the flags for both specific platform host or msp
#we should use ifeq

ifeq ($(PLATFORM), MSP432)
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld
	TARGET = $(NAME).out
	CFLAGS = $(FLAGS) \
	-mcpu=$(CPU) \
	-march=$(ARCH) \
	--specs=$(SPECS)  $(OTHERS)
	CPPFLAGS = -DMSP432 $(INCLUDES) 
	LDFLAGS = -Wl,-Map,$(NAME).map\
		-L ../$(LINKER_FILE)
	OBJDUMP = arm-none-eabi-objdump
	SIZE = arm-none-eabi-size
	
else ifeq ($(PLATFORM), HOST)
	CC = gcc
	LD = ld
	TARGET = $(NAME).out
	CFLAGS = $(FLAGS)
	CPPFLAGS = -DHOST $(INCLUDES)
	LDFLAGS =-Wl,-Map,$(NAME).map
	OBJDUMP = objdump
	SIZE = size
	
endif
# build hayi ke bayad anjam beshan ta file haye .c be file haye moshakhas shode tabdil beshan .
OBJS = $(SOURCES:.c=.o)
DEPS = $(SOURCES:.c=.d)
ASMS = $(SOURCES:.c=.asm)
PREP = $(SOURCES:.c=.i)
#chiz hayi ke dar payin neveshte shode hamun chiz hayie ke beghole ostad vaghti 
#masalan sudo apt-get mizanim va shuru mikone minevise, dar vaghe ma dastur hayi ke 
#gharar bud baraye make kardan benevisim yeki yeki ro inja yekja tarif mikonim hamasho


%.o: %.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@

%.asm: %.c
	$(CC) -S $< $(CFLAGS) $(CPPFLAGS) -o $@

%.i: %.c
	$(CC) -E $< $(CPPFLAGS) -o $@

%.d: %.c
	$(CC) -E -M $< $(CPPFLAGS) -o $@

$(NAME).asm: $(NAME).out
	$(OBJDUMP) -d $(TARGET).out >> $@
#albatte in hayi ke zadim bedune phony taghriban bedune estefadast, 
#bayad baraye build va hamchenin hame chiz hayi baraye comple ya clean lazeme ba phony tarif beshe
######################################################


.PHONY: compile-all
compile-all: $(OBJS) $(DEPS) $(ASMS) $(PREP)
		$(CC) $(OBJS) $(CFLAGS) $(CPPFLAGS) -o $@ 
	$(SIZE) $@
.PHONY: build
build: $(TARGET)

$(TARGET): $(OBJS) $(DEPS) $(ASMS) $(PREP)
	$(CC) $(OBJS) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ 
	$(SIZE) $@


.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET) $(BASNAME).map $(DEPS) $(ASMS) $(PREP)

