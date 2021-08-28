#pragma once
#include <stdio.h>


///strcut
typedef struct
{
    int x;
    int y;
} coordenada;
///Funciones a desarrollar

void asigna(coordenada *p, int x, int y);     // asigna las coordenadas a la estructura
void mueve(coordenada *p, int x, int y);      // avanza coordenada un valor x1 e y1.
int comparar(coordenada uno, coordenada dos); //compara con otra coordenada y devuelve 0
//si son idénticas, -1 si coordenada de la izq está mas cerca del origen, o 1 en caso contrario.
//ORIGEN = 0
