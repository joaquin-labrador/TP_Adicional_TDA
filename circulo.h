#pragma once
#include <stdio.h>

#include <math.h>
typedef struct
{
float radio;
}Circulo;

void asignar(Circulo * c ,float radio);
float Area(Circulo c); //devuelve area pi*radio^2
float Perimetro(Circulo c); // devuelve 2*pi*radio