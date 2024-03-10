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
			case 1:
				++index;
				if ( index < instructions.size() ) {
					variables[ tokens[index] ] = 0;
				}
				break;
			case 2:
				++index;
				if ( index < instructions.size() ) {
					std::cout << variables[tokens[index]];
				}
				break;
			case 3:
				index += 2;
				if ( index < instructions.size() ) {
					try {
						variables[tokens[index - 1]] = std::stod( tokens[index] );
					} catch ( const std::invalid_argument& e ) {
						variables[tokens[index - 1]] = instructions[index];
					} catch ( const std::out_of_range& e ) {
						variables[tokens[index - 1]] = instructions[index];
					}
				}
				break;
		}
	}
}