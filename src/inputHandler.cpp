#include "inputHandler.h"
#include <iostream>

using namespace std;

string InputHandler::getExpression() 
{
    cout << "Enter an expression: ";
    getline( cin, expression );
    return expression;
}

void InputHandler::errorHandler()
{

}

bool InputHandler::shouldQuit() const 
{
    return expression == "q" || expression == "Q";
}
