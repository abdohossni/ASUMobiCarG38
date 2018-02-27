#include <avr/io.h>
#include "cpu_def.h"

//Define PWM Channels
#define CH_A 0
#define CH_B 1

void setupPWM(void);
void pwm(uint8_t channel, uint16_t onTime, uint16_t period);

//Initializing PWM
void setupPWM(void){
	OC1x_DDR |= (1 << OC1A_PIN) | (1 << OC1B_PIN);
	TCCR1A = (1 << COM1A1) | (1 << COM1B1) | (1 << WGM11);	
	TCCR1B = (1 << WGM13) | (1 << WGM12) | (1 << CS11);
}

//Set PWM of the selected channel
void pwm(uint8_t channel, uint16_t onTime, uint16_t period){
	ICR1 = period;
	(channel == CH_B) ? (OCR1B = onTime) : (OCR1A = onTime);
}
