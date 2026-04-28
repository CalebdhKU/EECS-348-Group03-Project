#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <string>
#include <vector>

// Tokenizer class takes a string input (via inputHandler) and breaks it into smaller pieces (tokens)
class Tokenizer
{
    private:
        // Stores the user's input expression
        std::string input;
    
    public:
        // Constructor to store the user's input expression
        Tokenizer( string userInput );

        // Returns the list of tokens (numbers/operators as strings)
        vector<string> getTokens();
};

#endif
