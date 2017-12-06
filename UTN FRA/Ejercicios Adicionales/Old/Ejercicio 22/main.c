#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, aux;

    printf("Ingrese valor 1: ");
    scanf("%d",&num1);

    printf("Ingrese valor 2: ");
    scanf("%d",&num2);

    aux=num1;
    num1=num2;
    num2=aux;

    printf("El valor 1 es: %d\n\nEl valor 2 es: %d",num1,num2);


    return 0;
}
