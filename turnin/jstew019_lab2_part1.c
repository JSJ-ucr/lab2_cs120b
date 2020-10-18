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
DDRB = 0xFF; PORTB = 0x00;
unsigned char tempPA0 = 0x00;
unsigned char tempPA1 = 0x00;
    /* Insert your solution below */
    while (1) {
	tempPA0 = PINA & 0x80;
	tempPA1 = PINA & 0x40;

	if (tempPA0 == 0x80) {
		if(tempPA1 == 0x00) {
			PORTB = 0x80;
		}
	}
    }
    return 1;
}
