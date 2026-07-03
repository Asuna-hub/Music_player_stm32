#ifndef MAIN_H
#define MAIN_H

#include "stm32f103xg.h"
#include "dma.h"
#include "i2s.h"
#include "rcc.h"
#include "sdcard_spi.h"
#include "systick.h"

extern uint16_t audio_buffer[1024];

#endif