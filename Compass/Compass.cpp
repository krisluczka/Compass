#include "Compass.h"

/*
	1 - declares a number variable (the name is the next token)
	2 - prints a variable
	3 - sets a variable (next token is its name, the second is the value)
		if it's a valid number, it will be passed as a number, otherwise it'll take length
*/

void Compass::go() {
	for ( uint_fast64_t index( 0 ); index < instructions.size(); ++index ) {
		switch ( instructions[index] ) {
			case 1: {
				++index;
				variables[ tokens[index] ] = 0;
				break;
			}
			case 2: {
				++index;
				std::cout << variables[tokens[index]];
				break;
			}
		}
	}
}