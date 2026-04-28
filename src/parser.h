#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>

// Parser class evaluates the tokens using math rules
class Parser
{
    private:
        // Lists the tokens from the tokenizer
        vector<string> tokens;

        // Current position of the list
        int position;

    public:
        // Constructor to list the tokens from the tokenizer
        Parser( vector<string> tokenList );

};

#endif
