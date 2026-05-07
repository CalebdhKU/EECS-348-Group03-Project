#include "evaluator.h"
#include <stdexcept>
#include <cmath>    // for pow()

using namespace std;

double Evaluator::evaluate(AST* node) {
    if (node == nullptr) {
        throw invalid_argument("Invalid expression");
    }

    // BASE CASE: leaf node is a number — just return its value
    if (node->node.type == Tokentype::Number) {
        return stod(node->node.value);  // convert string "3.14" -> double 3.14
    }

    // RECURSIVE CASE: evaluate children first, then apply operator

    // Unary + or - (left child is nullptr, only right child exists)
    if (node->left == nullptr) {
        double right = evaluate(node->right);
        if (node->node.type == Tokentype::Minus) return -right;
        if (node->node.type == Tokentype::Plus)  return +right;
    }

    // Binary operators
    double left  = evaluate(node->left);
    double right = evaluate(node->right);

    switch (node->node.type) {
        case Tokentype::Plus:     return left + right;
        case Tokentype::Minus:    return left - right;
        case Tokentype::Multiply: return left * right;
        case Tokentype::Divide:
            if (right == 0) throw invalid_argument("Division by zero");
            return left / right;
        case Tokentype::Modulo:
            if (right == 0) throw invalid_argument("Modulo by zero");
            return fmod(left, right);
        case Tokentype::Power:    return pow(left, right);
        default:
            throw invalid_argument("Unknown operator: " + node->node.value);
    }
}
