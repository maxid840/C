#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, suma;

    printf("Ingrese un numero: ");
    scanf("%d",&num1);

    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    suma=num1+num2;

    printf("El resultado de la suma es: %d",suma);


    return 0;
}
