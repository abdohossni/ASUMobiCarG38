#define F_CPU 16000000
#include <avr/io.h>
int main(void)
{
	uint16_t UBRR_Value=103;           // serial speed ==9600 bit per second
	UBRRL = (int8_t) UBRR_Value;
	UBRRH = (int8_t) (UBRR_Value>>8);
	UCSRB = (1<<RXEN);    // configuration to receive serial data
	UCSRC |= (3<<UCSZ0);   // configuration to receive data as 8 bits at a time (standard)
	DDRA = 0X0F;        // using the first 4 pins of port a as outputs
	char received;     // variable to save the input data

    while (1) 
    {
		while (! (UCSRA & (1 << RXC))){  // code to receive and save the serial input
		received = UDR;}
		
		switch(received){ 
		case 'F' :
		PORTA=0x05;    //move forward
		break;
		case 'B' :
		PORTA=0x0A;    //move backward
		break;
		case 'R' :
		PORTA=0x09;   //move right
		break;
		case 'L' :
		PORTA=0x06;    //move left
		break;
		case 'S' :
		PORTA=0x00;   // stop
		break;
		default :
		PORTA=0X00;
		break;
		}
    }
}

