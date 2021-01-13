#include <stdint.h>
#include <syslib.h>

void _start(void){
	clrscr();
	setcolor(BACKGROUND_BLACK | FOREGROUND_DARKGRAY);
	kprintf("VaspelOS version %d Copyright (C) 2020 %s\n",kversion(), kvendor());
	kprintf("This program comes with ABSOLUTELY NO WARRANTY.\n");
	kprintf("This is free software, and you are welcome to redistribute it.\n");
	kprintf("This operating system is designed for the YouTuber Vaspel.\n\n");
	setcolor(BACKGROUND_BLACK | FOREGROUND_WHITE);
	exec("/driver/cmos.drv");
	exec("/driver/bf.drv");

	load_initrd("/initrd.img");

	exec("/progs/terminal.bin");
	task_exit(0);
}