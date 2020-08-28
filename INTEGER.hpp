#include <iostream>

using namespace std;

#ifndef INTEGER_H
#define INTEGER_H

class INTEGER
{
private:
    int numero;

public:
    INTEGER();
    INTEGER(int a);

    void operator<<(INTEGER a);
    void operator<<(int a);
    void operator!();
    INTEGER operator+(INTEGER a);
    INTEGER operator-(INTEGER a);
    INTEGER operator*(INTEGER a);
    INTEGER operator/(INTEGER a);
    int getValue();
};

#endif