#include "dma.h"

void DMA_Init(void) {
    RCC->AHBENR |= RCC_AHBENR_DMA1EN;

    DMA1_Channel5->CCR = 0;

    DMA1_Channel5->CCR |= DMA_CCR_MINC | DMA_CCR_PSIZE_0 | DMA_CCR_MSIZE_0 |
                          DMA_CCR_DIR | DMA_CCR_TCIE | DMA_CCR_HTIE;
    DMA1_Channel5->CPAR = (uint32_t)SPI2->DR;
    DMA1_Channel5->CMAR = (uint32_t)audio_buffer;
    DMA1_Channel5->CNDTR = 1024;

    NVIC_EnableIRQ(DMA1_Channel5_IRQn);
}