#include "Compass.h"

/*
	1 - pushes a number to a stack
	2 - pops a number from a stack
	3 - adds two numbers
	4 - subtracts two numbers
	5 - multiplies two numbers
*/

void Compass::go() {
	for ( uint_fast8_t instruction : instructions ) {
		switch ( instruction ) {
			case 1: {
				std::cout << "1" << std::endl;
				break;
			}
			case 2: {
				std::cout << "2" << std::endl;
				break;
			}
			case 3: {
				std::cout << "3" << std::endl;
				break;
			}
			case 4: {
				std::cout << "4" << std::endl;
				break;
			}
			case 5: {
				std::cout << "5" << std::endl;
				break;
			}
		}
	}
}