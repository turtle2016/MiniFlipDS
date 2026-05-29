source/main.c
#include <nds.h>

int main() {
    videoSetMode(MODE_5_2D);
    consoleDemoInit();

    iprintf("MiniFlip DS GitHub build working!\n");

    while (1) swiWaitForVBlank();
}
