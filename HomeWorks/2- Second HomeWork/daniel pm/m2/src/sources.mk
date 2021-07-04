
# inja chon 2 ta platform darim code haye micro ke lazem darim ro link midim va 2 ta to host #ham vase compolie lazeme iona ro ham add kardim / hadaf inja link dadan fileha hast va karo #asoon mikoneh
ifeq ($(PLATFORM), MSP432)
        SOURCES = main.c \
                  memory.c \
                  interrupts_msp432p401r_gcc.c \
                  startup_msp432p401r_gcc.c \
                  system_msp432p401r.c
else 
        SOURCES = main.c \
                  memory.c
endif

# inja miaym migim age target msp bood ina ro estede kon 
#age vase yek micro dige bekhaym iona ro ham mishe injori add kard
ifeq ($(PLATFORM), MSP432)
        INCLUDES = -I ../include/common \
                   -I ../include/CMSIS \
                   -I ../include/msp432
else 
        INCLUDES = -I ../include/common 
endif
