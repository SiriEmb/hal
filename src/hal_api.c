#include <stdio.h>
#include "hal_api.h"
void dma_start(int priority)
{
    printf("[HAL] DMA Started (priority=%d)\n", priority);
}
const char* hal_version(void){return "HAL v1.0";}
