#include <avr/io.h>
#include "cpu_def.h"

//Define PWM Channels
#define CH_A 0
#define CH_B 1

void setupPWM(void);
void pwm(uint8_t channel, uint16_t onTime, uint16_t period);
