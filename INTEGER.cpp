#include "INTEGER.hpp"

using namespace std;

INTEGER::INTEGER()
{
}
INTEGER::INTEGER(int a)
{
    this->numero = a;
}

int INTEGER::getValue()
{
    return this->numero;
}

void INTEGER::operator<<(int a)
{
    this->numero = a;
}

void INTEGER::operator<<(INTEGER a)
{
    this->numero = a.getValue();
}

void INTEGER::operator!()
{
    cout << to_string(this->numero)<<endl;
}

INTEGER INTEGER::operator+(INTEGER sumando)
{
    INTEGER respuesta;
    int resultado = numero + sumando.getValue();
    respuesta << resultado;
    return respuesta;
}
INTEGER INTEGER::operator-(INTEGER restando)
{
    INTEGER respuesta;
    int resultado = numero - restando.getValue();
    respuesta << resultado;
    return respuesta;
}
INTEGER INTEGER::operator*(INTEGER factor)
{
    INTEGER respuesta;
    int producto = numero * factor.getValue();
    respuesta << producto;
    return respuesta;
}
INTEGER INTEGER::operator/(INTEGER divisor)
{
    INTEGER respuesta;
    int cociente = numero / divisor.getValue();
    respuesta << cociente;
    return respuesta;
}