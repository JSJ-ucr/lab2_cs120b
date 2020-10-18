/*	Author: Jonathan Stewart-Jones
 *  Partner(s) Name: None
 *	Lab Section: 022
 *	Assignment: Lab #2  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
DDRA = 0x00; PORTA = 0xFF;
DDRB = 0x00; PORTB = 0xFF;
DDRC = 0x00; PORTC = 0xFF;
DDRD = 0xFF; PORTD = 0x00;

unsigned char totalWeight;
unsigned char totalWeightTrunc;
unsigned char weightAlert = 0x80;
unsigned char balanceAlert = 0x40;

    /* Insert your solution below */
    while (1) {	
	totalWeight = PINA + PINB + PINC;
	totalWeightTrunc = totalWeight>>2;
	if(totalWeight > 0x8C) {
		PORTD | weightAlert;
	}
	if(PINA - PINC > 80 || PINC - PINA > 80) {
		PORTD | balanceAlert;
	}
	PORTD = PORTD + totalWeightTrunc;
    }
    return 1;
}
