/* Implementation of the Parser class
Source: Recursive‑descent parser implemented with conceptual help from Microsoft Copilot.
*/

#include <stdexcept>

#include "parser.h" // Change this to the actual path of the Parser_header.hpp file if necessary.

using namespace std;

// Implements the constructor for the Parser class, which takes a vector of string tokens as input and converts them to a vector of Token structs.
Parser::Parser(const vector<string>& input){
    pos = 0;
    tokens = convert(input); // Convert the input vector of strings to a vector of Token structs.
}

// This function converts the vector of string tokens into a vector of Token structs with the appropriate type.
vector<Token> Parser::convert(const vector<string>& input) {
    // Array to hold the converted tokens.
    vector <Token> result;

    // Convert each string token to a Token struct with the appropriate type.
    for (const string& tokn : input) {
        if (tokn == "+"){
            result.push_back({Tokentype::Plus, tokn});
        }
        else if (tokn == "-"){
            result.push_back({Tokentype::Minus, tokn});
        }
        else if (tokn == "*"){
            result.push_back({Tokentype::Multiply, tokn});
        }
        else if (tokn == "/"){
            result.push_back({Tokentype::Divide, tokn});
        }
        else if (tokn == "%"){
            result.push_back({Tokentype::Modulo, tokn});
        }
        else if (tokn == "^" || tokn == "**"){
            result.push_back({Tokentype::Power, tokn});
        }
        else if (tokn == "("){
            result.push_back({Tokentype::LeftParenthesis, tokn});
        }
        else if (tokn == ")"){
            result.push_back({Tokentype::RightParenthesis, tokn});
        }
        else {
            // Check if the token is a number.
            if (isdigit(tokn[0])) {
                result.push_back({Tokentype::Number, tokn});
            }
            // In case the tokenizer failed to separate tokens correctly, we can catch for invalid tokens.
            else {
                throw invalid_argument("Invalid token: " + tokn);
            }
        }
    }
    result.push_back({Tokentype::EndOfExpression, ""}); // Add an EndOfExpression token at the end of the token vector as a sentinel.

    return result;
}

// This function returns the current token being processed by the parser.
Token Parser::getCurrentToken() const {
    return tokens[pos];
}

// This function advances the position to the next token in the vector.
void Parser::nextToken() {
    if (pos < tokens.size() - 1) {
        pos++;
    }
}

// This function checks if the current token matches the expected type, and throws an error if it does not.
void Parser::sentinel(Tokentype expected) {
    if (getCurrentToken().type != expected) {
        throw invalid_argument("Unexpected token: " + getCurrentToken().value);
    }
}

// This function initiates the parsing process and builds the Abstract Syntax Tree (AST) representing the expression.
AST* Parser::parse() {
    AST* root = parseExpression(); // Start parsing.
    sentinel(Tokentype::EndOfExpression); // Ensure that we have reached the end of the expression after parsing.
    return root; // Return the constructed AST.
}

// This function parses an expression, which consists of terms involved in '+' or '-' operations.
AST* Parser::parseExpression() {
    AST* left_node = parseTerm(); // Parse the first term by calling parseTerm() and store the result as the left node.

    // Continue parsing terms as long as the current token is '+' or '-'.
    while (getCurrentToken().type == Tokentype::Plus || getCurrentToken().type == Tokentype::Minus) {
        Token branch = getCurrentToken(); // Get the operator token.
        nextToken(); // Move to the next token.
        AST* right_node = parseTerm(); // Parse the next term.
        left_node = new AST{branch, left_node, right_node}; // Create a new AST node with the operator (branch) and the left and right subtrees.
    }

    return left_node; // Return the AST for the expression.
}

// This function parses a term, which consists of factors involved in '*' or '/' or '%' operations, and builds the corresponding AST.
AST* Parser::parseTerm() {
    AST* left_node = parseFactor(); // Parse the first factor by calling parseFactor() and store the result as the left node.

    while (getCurrentToken().type == Tokentype::Multiply || getCurrentToken().type == Tokentype::Divide || getCurrentToken().type == Tokentype::Modulo) {
        Token branch = getCurrentToken(); // Get the operator token.
        nextToken(); // Move to the next token.
        AST* right_node = parseFactor(); // Parse the next factor.
        left_node = new AST{branch, left_node, right_node}; // Create a new AST node with the operator (branch) and the left and right subtrees.
    }

    return left_node;
}

// This function parses a factor, which can be a number, a unary operator followed by a factor, or an expression enclosed in parentheses.
AST* Parser::parseFactor() {

    if (getCurrentToken().type == Tokentype::Plus || getCurrentToken().type == Tokentype::Minus) {
        Token branch = getCurrentToken(); // Get the unary operator token.
        nextToken(); // Move to the next token.
        AST* right_node = parseFactor(); // Parse the factor that follows the unary operator.
        return new AST{branch, nullptr, right_node}; // Create a new AST node with the unary operator and the right subtree (the factor).
    }

    return parsePower();
}

// This function parses an exponentiation operation, which consists of a factor followed by a '^' or '**' operator.
AST* Parser::parsePower() {
    AST* left_node = parseParentheses(); // Parse the term by calling parseParentheses() and store the result as the left node.

    while (getCurrentToken().type == Tokentype::Power) {
        Token branch = getCurrentToken(); // Get the operator token.
        nextToken(); // Move to the next token.
        AST* right_node = parseFactor(); // Parse the next factor (the exponent).
        left_node = new AST{branch, left_node, right_node}; // Create a new AST node with the operator (branch) and the left and right subtrees.
    }

    return left_node;
}

// This function parses an expression enclosed in parentheses, which consists of a left parenthesis followed by an expression and a right parenthesis.
AST* Parser::parseParentheses() {
    if (getCurrentToken().type == Tokentype::Number){
        Token leaf = getCurrentToken(); // Get the number token.
        nextToken(); // Move to the next token.

        return new AST{leaf, nullptr, nullptr}; // Create a new AST node with the number token and no children.
    }

    if (getCurrentToken().type == Tokentype::LeftParenthesis) {
        nextToken(); // Move past the left parenthesis.

        AST* node = parseExpression(); // Parse the expression inside the parentheses.
        sentinel(Tokentype::RightParenthesis); // Ensure that we have a right parenthesis after parsing the expression.
        nextToken(); // Move past the right parenthesis.

        return node; // Return the AST for the expression inside the parentheses.
    }
}