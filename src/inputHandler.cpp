#include "inputHandler.h"
#include <iostream>

using namespace std;

// Asks the user for the input, stored/returned as expression
string InputHandler::getExpression() 
{
    cout << "Enter an expression: ";
    getline( cin, expression );
    return expression;
}

// Checks if the user wants to quit by typing q or Q
bool InputHandler::shouldQuit() const 
{
    return expression == "q" || expression == "Q";
}
