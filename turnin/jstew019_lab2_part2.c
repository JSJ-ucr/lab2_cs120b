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
DDRC = 0xFF; PORTC = 0x00;

    /* Insert your solution below */
    while (1) {	
	if(PINA == 0x00) {
		PORTC = 0x04;
	}
	else if(PINA == 0x10) {
		PORTC = 0x03;
	}
	else if(PINA == 0x20) {
		PORTC = 0x03;
	}
	else if(PINA == 0x30) {
		PORTC = 0x02;
	}
	else if(PINA == 0x40) {
		PORTC = 0x03;
	}
	else if(PINA == 0x50) {
		PORTC = 0x02;
	}
	else if(PINA == 0x60) {
		PORTC = 0x02;
	}
	else if(PINA == 0x70) {
		PORTC = 0x01;
	}
	else if(PINA == 0x80) {
		PORTC = 0x03;
	}
	else if(PINA == 0x90) {
		PORTC = 0x02;
	}
	else if(PINA == 0xA0) {
		PORTC = 0x02;
	}
	else if(PINA == 0xB0) {
		PORTC = 0x01;
	}
	else if(PINA == 0xC0) {
		PORTC = 0x02;
	}
	else if(PINA == 0xD0) {
		PORTC = 0x01;
	}
	else if(PINA == 0xE0) {
		PORTC = 0x01;
	}
	else if(PINA == 0xF0) {
		PORTC = 0x00;
	}

    }
    return 1;
}
