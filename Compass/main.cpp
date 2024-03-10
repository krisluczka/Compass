#include <iostream>
#include "Compass.h"

using namespace std;

int main() {
    Compass processor;
    processor.load_program_from_string( "A variable. An variable." );
    processor.go();
}