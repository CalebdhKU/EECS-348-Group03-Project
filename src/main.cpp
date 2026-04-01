#include "inputHandler.h"
#include "tokenizer.h"
#include "parser.h"
#include <iostream>

using namespace std;

int main()
{
    InputHandler inputHandler;

    cout << "----------------------------------------------\n";
    cout << "Arithmetic Expression Evaluator\n";
    cout << "Enter 'q' to Quit\n";
    cout << "----------------------------------------------\n";

    while(true)
    {
        try
        {
            string input = inputHandler.getExpression();

            if ( inputHandler.shouldQuit() ) 
            {
                cout << "Exiting program...\n";
                break;
            }

            // Adding Tokenizer & Parser using string input

            cout << "Result: " << result << endl;
        }
        catch( const std::exception& e )
        {
            cout << "Error: " << e.what() << endl;
        }
    }

    return 0;
}
