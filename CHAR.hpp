#include <iostream>
#include <string>

using namespace std;
#ifndef CHAR_H
#define CHAR_H

class CHAR
{
private:
    char caracter;

public:
    CHAR();
    CHAR(char);
    
    void operator<<(CHAR);
    void operator<<(char);
    void operator!();
    CHAR operator+(CHAR);
    char getChar();
};

#endif