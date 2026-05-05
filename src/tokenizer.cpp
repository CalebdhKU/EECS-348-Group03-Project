#include "tokenizer.h"
#include <iostream>
#include <cctype>       // for isdigit()
#include <stdexcept>    // for errors

using namespace std;

// Constructor to save the user input into the class variable
Tokenizer::Tokenizer( string userInput )
{
    input = userInput;
}

// getTokens will split the user's input into tokens, returning the string
vector<string> Tokenizer::getTokens()
{
    vector<string> tokens;  // Stores final tokens
    string number = "";     // Temporary string to build numbers

    // Looping through each character from the user's input
    for ( int i = 0; i < input.length(); i++ )
    {
        // Grabs one character from the input
        char ch = input[i];

        // If the character is a number or decimal point, add into the number string. This allows us
        // to store numbers longer than one character as a singular token
        if ( isdigit(ch) || ch == '.' )
        {
            number += ch;
        }
        else
        {
            // If we were building a number, by checking if its not empty, push it to tokens and
            // reset the number string to empty incase theres another multi-character number
            if ( number != "" )
            {
                tokens.push_back( number );
                number = "";
            }

            // Checks for an exponent, so if a char is '*' it will look ahead into the next char and
            // see if it equals (meaning back to back ch are ** signifying an exponent). If this
            // occurs, the exponent identifier (**) will be pushed as a token. Otherwise just the
            // multifiplication symbol (*) is pushed back.
            if ( ch == '*' )
            {
                if ( i + 1 < input.length() && input[i + 1] == '*' )
                {
                    tokens.push_back( "**" );
                    i++;    // Incrementing the input to skip next *
                }
                else
                {
                    tokens.push_back( "*" );
                }
            }

            // Checks for other operators and parentheses, and pushes them back as individual tokens
            else if ( ch == '+' || ch == '-' || ch == '/' || ch == '%' || ch == '(' || ch == ')' )
            {
                tokens.push_back( string( 1, ch ) );
            }

            // If there's any other characters from the user input, we throw an error message to tell
            // the user. Note: If we're adding math constants (pi, e, etc.) they will need to be
            // added above as an individual token and parsed.
            else
            {
                throw invalid_argument( "Invalid character entered!" );
            }
        }
    }

    // If there's still a number being built after the loop, meaning number isn't empty, we push that 
    // final number into the tokens list.
    if ( number != "" )
    {
        tokens.push_back( number );
    }

    return tokens;
}
