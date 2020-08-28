#include "CHAR.hpp"

CHAR::CHAR()
{
}
CHAR::CHAR(char a)
{
    this->caracter = a;
}
char CHAR::getChar()
{
    return this->caracter;
}
void CHAR::operator<<(CHAR a)
{
    caracter = a.getChar();
}
void CHAR ::operator<<(char a)
{
    caracter = a;
}
void CHAR::operator!()
{
    cout<<this->caracter;
}

