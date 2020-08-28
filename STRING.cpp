#include "STRING.hpp"

STRING::STRING()
{
}
STRING::STRING(string a)
{
    this->cadena = a;
}
string STRING::getCadena()
{
    return this->cadena;
}
void STRING::operator<<(STRING a)
{
    cadena = a.getCadena();
}
void STRING::operator<<(string a)
{
    cadena = a;
}
STRING STRING::operator*(int repeticiones)
{
    string temporal;
    STRING cadenaRepetida;
    for (int i = 0; i < repeticiones; i++)
    {
        temporal += cadena;
    }
    cadenaRepetida << temporal;
    return cadenaRepetida;
}
void STRING::operator!()
{
    cout << this->cadena<<endl;
}
