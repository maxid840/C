#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, cuadrado;

    printf("Ingrese un valor numerico mayor a cero: ");
    scanf("%d",&numero);
    system("cls");

    while(numero<=0)
    {
        printf("Error, el numero debe ser mayor que cero: ");
        scanf("%d",&numero);
        system("cls");
    }

    cuadrado=numero*numero;

    printf("cuadrado: %d\n\n",cuadrado);

    return 0;
}


