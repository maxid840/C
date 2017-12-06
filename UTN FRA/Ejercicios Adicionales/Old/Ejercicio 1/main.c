#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acum, num;
    float media;

    for(int i=0;i<5;i++)                       //Modificar desde Settings-->Compiler...-->c99 para declarar variable en FOR
        {
        printf("Ingrese valor: ");
        scanf("%d", &num);

        acum=num+acum;

        }

    media=(float)acum/5;                     //CASTEO EXPLICITO

    printf("La media es %.2f\n\n", media);

    return 0;
}
