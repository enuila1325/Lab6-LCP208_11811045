#include <iostream>
#include <string>

using namespace std;
#ifndef STRING_H
#define STRING_H
class STRING
{
private:
    string cadena;

public:
    STRING();
    STRING(string);
    string getCadena();
    STRING operator*(int);
    void operator!();
    void operator<<(STRING);
    void operator<<(string);
    
};
#endif