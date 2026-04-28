#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <string>

// InputHandler class handles getting input from the user
class InputHandler 
{
    private:
        // Stores the expression the user types
        std::string expression;

    public:
        // Asks the user to enter an expression and returns it
        std::string getExpression();

        // Checks if the user typed q or Q to quit
        bool shouldQuit() const;
};

#endif
