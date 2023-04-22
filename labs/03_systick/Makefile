#-----------------------
# Compiler/linker flags
#-----------------------

CC = arm-none-eabi-gcc

CFLAGS = \
	-std=c18 \
	-Wall \
	-Wextra \
	-Werror \
	-march=armv6-m \
	-mcpu=cortex-m0

LDFLAGS = \
	-Wall \
	-Wextra \
	-Werror \
	-Wl,--start-group -lgcc -lc -lg -Wl,--end-group -Wl,--gc-sections \
	-march=armv6-m \
	-mcpu=cortex-m0 \
	-Wl,--warn-common \
	-Wl,--fatal-warnings \
	-Wl,-z,max-page-size=8 \
	-Wl,-T,entry.lds

ifeq ($(DEBUG),1)
	CFLAGS += -g
endif

#-------
# Files
#-------

SOURCES = \
	entry.S

OBJECTS_HALFWAY_DONE = $(SOURCES:%.c=build/%.o)
OBJECTS              = $(OBJECTS_HALFWAY_DONE:%.S=build/%.o)

ENTRY_FLASH = build/entry.o

EXECUTABLE_FLASH = build/systick.elf
BINARY_FLASH     = build/systick.bin

PORT_EXECUTABLE_FLASH = build/gpio_port.elf
PORT_BINARY_FLASH     = build/gpio_port.bin

#---------------
# Build scripts
#---------------

all: $(EXECUTABLE_FLASH) $(BINARY_FLASH) $(PORT_EXECUTABLE_FLASH) $(PORT_BINARY_FLASH) $(SOURCES)

$(EXECUTABLE_FLASH): $(OBJECTS) build/systick.o
	$(CC) $(LDFLAGS) $? -o $@

$(BINARY_FLASH): $(EXECUTABLE_FLASH)
	arm-none-eabi-objcopy -O binary $< $@

$(PORT_EXECUTABLE_FLASH): $(OBJECTS) build/gpio_port.o
	$(CC) $(LDFLAGS) $? -o $@

$(PORT_BINARY_FLASH): $(PORT_EXECUTABLE_FLASH)
	arm-none-eabi-objcopy -O binary $< $@

build/%.o: %.c
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ -c $<

build/%.o: %.S
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf build

#----------------------
# Hardware interaction
#----------------------

port: $(PORT_BINARY_FLASH)
	st-flash --connect-under-reset --reset write $(PORT_BINARY_FLASH) 0x08000000

flash: $(BINARY_FLASH)
	st-flash write $(BINARY_FLASH) 0x08000000

GDB_FLAGS = \
	--eval-command="set architecture arm" \
	--eval-command="set gnutarget elf32-littlearm" \
	--eval-command="target remote localhost:1234" \
	--eval-command="file $(EXECUTABLE_FLASH)"

hardware: $(EXECUTABLE_FLASH)
	st-util -p 1234

gdb: $(BINARY_FLASH)
	arm-none-eabi-gdb $(GDB_FLAGS)

.PHONY: all clean flash hardware gdb
