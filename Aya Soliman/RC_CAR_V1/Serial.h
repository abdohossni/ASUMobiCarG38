
#define BAUD_RATE 9600

#include <avr/io.h>
#include "cpu_def.h"

void initUSART(void);
uint8_t getCh(void);
void putCh(uint8_t data);
