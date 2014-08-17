#include <avr/io.h>
#include "i2cmaster.h"

// SCL on PD5, SDA on PD4

#define DATA	PB2
#define CLOCK	PB1
#define LATCH	PB0

int main(void)
{
	// Set shift register pins as outputs
	DDRB = (1 << DATA) | (1 << CLOCK) | (1 << LATCH);

	// Write the latch pin high
	PORTB = (1 << LATCH);
	while(1)
	{

	}
}