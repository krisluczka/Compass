#include <iostream>
#include "Compass.h"

using namespace std;

int main() {
    Compass processor;
    processor.load_program_from_string( "A variable. The variable. t12.3 An variable." );
    processor.go();
}