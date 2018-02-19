
#define F_CPU1000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA=0b11111111;
    while (1) 
    {
	// display 0 
	PORTA=0b00111111;
	_delay_ms(1000);
    // display 1
	PORTA=0b00000110;
	_delay_ms(1000);
	//display2
	PORTA=0b01011011;
	_delay_ms(1000);
	//display3
	PORTA=0b01001111;
	_delay_ms(1000);
	//display4
	PORTA=0b01100110;
	_delay_ms(1000);
	//display5
	PORTA=0b01101101;
	_delay_ms(1000);
	//display6
	PORTA=0b01111101;
	_delay_ms(1000);
	//display7
	PORTA=0b00000111;
	_delay_ms(1000);
	//display8
	PORTA=0b01111111;
	_delay_ms(1000);
	//display9
	PORTA=0b01101111;
	_delay_ms(1000);
	



    }
}

