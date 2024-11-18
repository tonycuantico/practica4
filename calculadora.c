Hacer un algoritmo que permita sumar, restar, dividir y multiplicar 
segun la elección del usuario.*/


#include <stdio.h>
#include <math.h>


int main ()
{
    int a = 0, b = 0, operation = 0;
    int option;

    printf("Dime que operacion deseas realizar: \n");
    printf("1 .- Suma\n");
    printf("2 .- Resta\n");
    printf("3 .- Multiplicacion\n");
    printf("4 .- Division\n");
    scanf("%d", &option);

    

    do
    {
        printf("Dame los numeros:\n");
        printf("numero 1: ");
        scanf("%d", &a);
        printf("numero 2: ");
        scanf("%d", &b);

        switch (option)
        {
            case 1:
                operation = a + b;
                break;
            case 2:
                operation = a - b;
                break;
            case 3:
                operation = a * b;
                break;
            case 4:
                operation = a / b;
                break;
        }

        printf("El resultado de la operacion es: %d\n", operation);

        printf("Deseas realizar otra operacion: \n");
        printf("1 .- Suma\n");
        printf("2 .- Resta\n");
        printf("3 .- Multiplicacion\n");
        printf("4 .- Division\n");
        printf("deseas salir: \n");
        printf("-1 .- Salir\n");
        scanf("%d", &option);
    }
    while (option != -1);

    return 0;
}
