#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resta;

    printf("Ingrese un numero: ");
    scanf("%d",&num1);

    system("cls");

    printf("Ingrese otro numero: ");
    scanf("%d",&num2);

    system("cls");

    resta=num1-num2;

    if(resta>0)
    {
        printf("El resultado es positivo");
    }
    else
    {
        printf("El resultado es negativo");
    }

    return 0;
}
