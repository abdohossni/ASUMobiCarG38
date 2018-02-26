
#define F_CPU 16000000UL
#define BAUDRATE 9600
#include <avr/io.h>
#include <util/delay.h>
void uart_init(void)
{
	UBRRH = (uint8_t)(((F_CPU/(BAUDRATE*16))-1)>>8);
	UBRRL = (uint8_t)((F_CPU/(BAUDRATE*16))-1);
	UCSRC |=  ( 1 << UCSZ1) | (1 << UCSZ0);
	UCSRB |= (1 << TXEN) | (1 << RXEN);
}
unsigned char uart_receive(void)
{
	while (! (UCSRA & (1 << RXC)));
	return UDR;
}
void move()
{
	unsigned char receive ;
	receive = uart_receive();
	//PA0 right-forward motor
	//PA1 left-forward motor
	//PA2 right-back motor
	//PA3 left-back motor
	if ( receive =="F")
	{
		PORTA |= (1<<PA0)|(1<<PA1);
	}
	else if ( receive =="B"){
		
		PORTA |= (1<<PA2)|(1<<PA3);
	}
	else if ( receive =="L"){
		
		PORTA |=(1<<PA1)|(1<<PA2)
	}
	else if ( receive =="R"){
		PORTA|=(1<<PA0)|(1<<PA3)
	}
	else {
		PORTA = 0x00
	}
}

int main(void)
{
	uart_init();
	DDRA = 0xff;
	while (1)
	{
		move();
	}
}

