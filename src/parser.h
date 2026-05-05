/*This package defines the Parser class, which is responsible for taking a vector of string tokens, converting them into a vector of Token structs, and providing methods for the parsing process. 
The Parser class includes methods to parse expressions, terms, factors, exponentiation operations, and expressions enclosed in parentheses, building an Abstract Syntax Tree (AST) that represents the structure of the expression. 
The package also defines the Token struct and the Tokentype enum to represent the different types of tokens that can be encountered in the expression.

Tracing the process:
1) The parser receives a vector of string tokens as input, which is then converted (convert()) into a vector of Token structs using the convert function.
2) The parse() function initiates the parsing process by calling parse(), which builds the AST for the expression. 
3) The parseExpression() function handles the parsing of expressions, which consist of terms involved in '+' or '-' operations. It calls parseTerm() to parse the first term and then continues as long as the current token is a '+' or '-'.
4) The parseTerm() function handles the parsing of terms, which consist of factors involved in '*' or '/' or '%' operations. It calls parseFactor() to parse the first factor and then continues as long as the current token is a '*' or '/' or '%'.
5) The parseFactor() function handles the parsing of factors, which can be a number, a unary operator followed by a factor, or an expression enclosed in parentheses. It checks for unary operators and calls parsePower() to handle exponentiation operations.
6) The parsePower() function handles the parsing of exponentiation operations, which consist of a factor followed by a '^' or '**' operator. It calls parseParentheses() to handle expressions enclosed in 
   parentheses and continues to parse as long as the current token is a '^' or '**'.
7) The parseParentheses() function handles the parsing of expressions enclosed in parentheses. It checks for a left parenthesis, calls parseExpression() to parse the expression inside the parentheses, and then checks for a right parenthesis.
8) The sentinel() function is used to ensure that the current token matches the expected type, and it throws an error if it does not. 
   This is used to ensure that the parsing process is correctly structured and that the expected tokens are encountered accordingly in the expression.

Additionally, the getCurrentToken() function returns the current token being processed by the parser, and the nextToken() function advances the position to the next token in the vector. 
These functions are used throughout the parsing process to manage the flow of tokens and ensure that the correct tokens are being processed at each step.

Note: The resulting tree structure of the AST will be traversed in an infix manner, meaning that the operator will be the parent node and the operands will be the left and right child nodes.
Hence, the evaluator will need to traverse the AST using an inorder traversal to correctly evaluate the expression.
*/

#ifndef PARSER_HEADER_HPP
#define PARSER_HEADER_HPP

#include <string>
#include <vector>
//#include 'tokenizer.h' //uncomment this line if we have a separate tokenizer header file.

using namespace std;

// Define the types of tokens that can be encountered in the expression.
// This makes it easier to identify the type of each token, handle them accordingly in the parsing process, and parse them into an AST. 
//It also helps in error handling by allowing us to identify unexpected tokens and provide meaningful error messages.
enum class Tokentype {
    Number,
    Plus,
    Minus,
    Multiply,
    Divide,
    Modulo,
    Power,
    LeftParenthesis,
    RightParenthesis,
    EndOfExpression
};

// Define a struct to represent a token, which consists of a type and a value. 
// The type is used to identify the kind of token while the value holds the actual string representation of the token (e.g., "3", "+").
struct Token {
    Tokentype type;
    string value;
};

// The Parser class is responsible for taking a vector of string tokens, converting them into a vector of Token structs, and providing methods for the parsing process.
class Parser {
    private:
        int pos; // position in the token vector, used to keep track of the current token being processed.
        vector<Token> tokens; // vector of Token structs that will be used for parsing the expression.

        vector<Token> convert (const vector<string>& input); // function to convert the input vector of strings into a vector of Token structs.


        AST* parseExpression(); // function to parse an expression and build the corresponding AST.
        AST* parseTerm(); // function to parse a term which check if the current token is a factor.
        AST* parseFactor(); // function to parse a factor which check if the current token is a unary operator or a number.
        AST* parsePower(); // function to parse an exponentiation operation.
        AST* parseParentheses(); // function to parse an expression enclosed in parentheses.
        void sentinel(Tokentype expected); // function to check if the current token matches the expected type, and throw an error if it does not.

    public:
        Parser(const vector<string>& input);
        
        Token getCurrentToken() const; // function to return the current token being processed by the parser.
        void nextToken(); // function to advance to the next token in the token vector, updating the position accordingly.
        AST* parse(); // function to parse the tokens and build an Abstract Syntax Tree (AST) representing the expression.
};

struct AST {
    Token node;
    AST* left;
    AST* right;
};

#endif // PARSER_HEADER_HPP
