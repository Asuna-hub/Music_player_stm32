#include "main.h"

int main() {
    rcc_init();
    I2S_Init();
    I2S_write16(0xFFFF);
    I2S_write16(0x0000);
}