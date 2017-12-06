#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, prod, cuad;

    printf("Ingrese un numero: ");
    scanf("%d",&num1);

    system("cls");

    printf("Ingrese otro numero: ");
    scanf("%d",&num2);

    system("cls");

    prod=num1*num2;
    cuad=num1*num1;


    printf("El producto final es: %d\n\nEl cuadrado del primer valor es: %d\n\n", prod, cuad);

    return 0;
}
