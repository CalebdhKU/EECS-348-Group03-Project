#include "parser.h"
#include <iostream>

using namespace std;

// Constructor to initialize the tokens and starting position
Parser::Parser( vector<string> tokenList )
{
    tokens = tokenList;
    position = 0;
}
