#include "inputHandler.h"
#include "tokenizer.h"
#include "parser.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    InputHandler inputHandler;

    // Program header
    cout << "----------------------------------------------\n";
    cout << "Arithmetic Expression Evaluator\n";
    cout << "Enter 'q' to Quit\n";
    cout << "----------------------------------------------\n";

    // Utilizing while loop to allow the user to enter multiple expressions without restarting the
    // program after each input. The loop only ends after the user enters 'q' to Quit.
    while(true)
    {
        // Utilizing try-catch for error handling. Instead of the program crashing for an invalid
        // input, bad parentheses, etc. the program will show an error message instead.
        try
        {
            // Getting user input
            string input = inputHandler.getExpression();

            // Checking if user quits
            if ( inputHandler.shouldQuit() ) 
            {
                cout << "Exiting program...\n";
                break;
            }
            
            // Tokenizing input
            Tokenizer tokenizer( input );
            vector<string> tokens = tokenizer.getTokens();

            // Parsing and evaluating
            Parser parser( tokens );
            // result variable from the parser?

            // Outputting result
            cout << "Result: " << result << endl;
            cout << "----------------------------------------------\n";
        }
        // If an error occurs, it will be caught and outputted to the user using e.what() to specify
        // why the error occured.
        catch( const std::exception& e )
        {
            cout << "Error: " << e.what() << endl;
            cout << "----------------------------------------------\n";
        }
    }

    return 0;
}
