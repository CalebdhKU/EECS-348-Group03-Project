#include "inputHandler.h"
#include "tokenizer.h"
#include "parser.h"
#include "evaluator.h"
#include <iostream>
#include <vector>
#include <fstream>

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

            // Parsing the input to build a tree
            Parser parser( tokens );
            AST* root = parser.parse();

            // Evaluating the input tree to get result
            Evaluator evaluator;
            double result = evaluator.evaluate( root );

            // Outputting result
            cout << "Result: " << result << endl;
            cout << "----------------------------------------------\n";

            // Creates/Opens a text file called "history.txt" in append mode, which ensures that all
            // results (of the new expression calculations) to be added at the end of the textfile,
            // instead of overreading previous results.
            ofstream historyFile( "history.txt", ios::app );

            // If the file is open/opened successfully, the user's expression and result is outputted
            // onto the textfile, then the file is closed. If the history textfile can't get opened,
            // an error message is thrown to notify the user. 
            if ( historyFile.is_open() )
            {
                historyFile << input << " = " << result << endl;
                historyFile.close();
            }
            else
            {
                throw invalid_argument( "Error! Could not open 'history.txt'." );
            }
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
