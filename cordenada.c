#include "cordenada.h"

void asigna(coordenada *p, int x, int y)
{
    (*p).x = x;
    (*p).y = y;
}
void mueve(coordenada *p, int x, int y) //(Se pueden mandar valores negativos para mover)
{
    (*p).x + x;
    (*p).y + y;
}
int comparar(coordenada uno, coordenada dos)
{
    if ((uno.x == dos.x) && (uno.y == dos.y))
    {
        return 0;
    }
    else
    {
        if ((uno.x > dos.x) && (uno.y > dos.y))
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}
