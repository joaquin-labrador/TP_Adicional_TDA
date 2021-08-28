#include "cordenada.h"
#include "circulo.h"
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h> // para tolower
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

void mostrarMenu()
{
    printf(" Ingrese la opcion a ejecutar\n");
    printf(" 1. Asigna valores a las cordendas\n");

    printf(" 2. Mover tus cordenadas\n");
    printf(" 3. Comparar dos cordenadas\n");

    printf("--------------------------------------\n");
    printf(" 4. Asiganar valor a un circulo\n");
    printf(" 5. Calcula el area de tu cirulo\n");
    printf(" 6. Calucla el perimetro de tu circulo\n");

    printf(" 7. Salir del programa\n");
}
void TorFcompare(int c)
{
    if (c == 0)
    {
        printf("Las cordenadas son identicas\n");
    }
    else
    {
        if (c == 1)
        {
            printf("La cordenada S esta mas cerca del origen\n");
        }
        else if (c == -1)
        {
            printf("La cordenada C esta mas cerca del origen\n");
        }
        else
        {
            printf("ERROR FUNCION 404\n");
        }
    }
}

int main()
{
    int op = 0;
    int x = 0;
    int y = 0;
    int compare = 0;
    float radio = 0.00;
    float areas = 0.00;
    float p = 0.00;
    char mand;
    coordenada c;
    coordenada s;
    Circulo circle;
    do
    {
        mostrarMenu();
        scanf("%d", &op);
        system("cls");
        switch (op)
        {
        case 1:
            asigna(&c, 8, 9);
            asigna(&s, 7, 6);
            break;
        case 2:
            mueve(&c, 1, 2);
            mueve(&s, -2, 3); //Se pueden hacer retrosesos en el plano
            break;
        case 3:
            compare = comparar(c, s);
            TorFcompare(compare);
            // Ejemplificacion uso de usuario
        case 4:
            printf("Ingrese el radio de su circunferencia\n");
            scanf("%f", &radio);
            asignar(&circle, radio);
            system("pause>nul");
            system("cls");
            break;
        case 5:
            areas = Area(circle);
            printf("El area de su circulo es %.2f CM 2 \n", areas);
            system("pause>nul");
            system("cls");
            break;
        case 6:
            p = Perimetro(circle);
            printf("El area de su circulo es %.2f CM 2 \n", p);
            system("pause>nul");
            system("cls");
            break;

        default:
            break;
        }
    } while (op < 7);
}