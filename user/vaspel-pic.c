#include <stdint.h>
#include <syslib.h>
#include "../pic/vaspel.h"

void _start(void){
    init_vga();
    set_vga_color(VGA_YELLOW, VGA_WHITE);
    clrscr();

    for(int y = 0; y < height; y++) {
        for(int x = 0; x < width; x++) {
            switch(img[y][x]) {
                case 0:
                    setpixel(x, y, VGA_BLACK);
                    break;
            }
        }
    }

	task_exit(0);
}