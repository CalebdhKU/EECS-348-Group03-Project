#ifndef EVALUATOR_H
#define EVALUATOR_H

#include "parser.h"

class Evaluator {
public:
    // Recursively walks the AST and returns the computed result
    double evaluate(AST* node);
};

#endif