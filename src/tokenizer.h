#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <string>

class Tokenizer
{
    private:
        std::string input;
    
    public:
        std::string getResult();
        void getToken();
};

#endif
