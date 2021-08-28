#include "circulo.h"
#define p 3.14

void asignar(Circulo *c ,float radio)
{
    (*c).radio=radio;
}
float Area (Circulo c)
{
    float area = p * pow(c.radio,2);
    return area;
}
float Perimetro(Circulo c)
{
    float l= 2 * p * c.radio;
    return l;
}