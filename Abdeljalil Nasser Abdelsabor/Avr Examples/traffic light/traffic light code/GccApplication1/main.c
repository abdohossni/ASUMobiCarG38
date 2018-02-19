
#define F_CPU8000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA=0b00000111;
    uint8_t yellow;
    while (1) 
    {
	//for Green LED 
		PORTA=0b00000001;
		_delay_ms(15000);
		yellow=0;
		do{
		// yellow LED flashes 5 times 
			PORTA=0b00000010;
			_delay_ms(500);
			PORTA=0b00000000;
			_delay_ms(500);
			yellow+=1;
		}
			while(yellow<5);
		// for Red LED
			PORTA=0b00000100;
			_delay_ms(15000);
				
    }
	return 0;
}

