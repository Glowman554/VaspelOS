INIT = init.o syslib.o
TERMINAL = terminal.o syslib.o
DESKTOP = desktop.o syslib.o
CMOS = cmos.o syslib.o driverlib.o
TIMER = timer.o syslib.o
BF = bf.o syslib.o
VASPEL_PIC = vaspel-pic.o syslib.o

CFLAGS = -m32 -Wall -g -fno-stack-protector -nostdinc -I include
LDFLAGS = -melf_i386

all: init.bin terminal.bin desktop.bin cmos.drv timer.bin bf.drv vaspel-pic.bin
	
init.bin: $(INIT)
	ld $(LDFLAGS) -Ttext=0x200000 -o $@ $^
	
terminal.bin: $(TERMINAL)
	ld $(LDFLAGS) -Ttext=0x300000 -o $@ $^

desktop.bin: $(DESKTOP)
	ld $(LDFLAGS) -Ttext=0x400000 -o $@ $^

cmos.drv: $(CMOS)
	ld $(LDFLAGS) -Ttext=0x500000 -o $@ $^

timer.bin: $(TIMER)
	ld $(LDFLAGS) -Ttext=0x600000 -o $@ $^

bf.drv: $(BF)
	ld $(LDFLAGS) -Ttext=0x700000 -o $@ $^

vaspel-pic.bin: $(VASPEL_PIC)
	ld $(LDFLAGS) -Ttext=0x800000 -o $@ $^

%.o: %.c
	@echo CC $^
	@gcc $(CFLAGS) -c -o $@ $^

clean:
	rm *.o
	rm *.bin
	rm *.drv

.PHONY: clean