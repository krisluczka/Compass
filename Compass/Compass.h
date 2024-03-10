#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

/*
    Program has a set of instructions enumerated from 1 to x,
    and the length of given token represents the instruction index
    to be executed.
*/
class Compass {
    public:
        void load_program_from_string( const std::string& inputString ) {
            std::istringstream tokenStream( inputString );
            std::string token;

            // saving them inputs
            while ( tokenStream >> token ) {
                instructions.push_back( token.length() );
                tokens.push_back( token );
            }
        }

        void go();

    private:
        std::vector<int_fast8_t> instructions;
        std::vector<std::string> tokens;

        std::unordered_map<std::string, long double> variables;
};