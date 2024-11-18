Ejercici 2, practica 4
Hacer un algoritmo que permita sumar, restar, dividir y multiplicar 
segun la elección del usuario.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    int h = 0, m = 0, s = 0;

    do
    {
        do
        {
            do
            {
                printf("La hora es %d:%d:%d\n", h,m,s);
                s = s + 1;
                system("clear");
            } while (s <= 59);
            s = 0;
            m = m + 1;
        } while (m <= 59);
        s = 0;
        m = 0;
        h = h + 1;
    } while (h <= 23);
    
}
