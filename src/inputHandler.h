#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <string>

class InputHandler 
{
    private:
        std::string expression;

    public:
        std::string getExpression();
        void errorHandler();
        bool shouldQuit() const;
};

#endif
