#include <avr/io.h>
#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"


void main (void)
{
	u8 sevseg[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,
			       0b01101101,0b01111101,0b00000111,0b01111111,0b01100111};
	u8 counter,waiting;
    DDRC=0xFF;
    DDRA=0b00000011;
    while(1)
    {
    	for(counter=0;counter<10;counter++)
    	{
    		for (waiting=0;waiting<50;waiting++) //50*20ms(10+10)=1000ms==1second
    		{
    		PORTA=0b00000010;
    		PORTC=sevseg[counter];
    		_delay_ms(10);
    		PORTA=0b00000001;
    		PORTC=sevseg[9-counter];
    		_delay_ms(10);
    		}
    	}


    }



}








