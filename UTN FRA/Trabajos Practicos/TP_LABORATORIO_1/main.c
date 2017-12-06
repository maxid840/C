#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float aux,x=0,y=0;

    while(seguir=='s')


    {
        printf("1- Ingresar 1er operando (A= %.2f)\n",x);
        printf("2- Ingresar 2do operando (B= %.2f)\n",y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("\n\nBienvenido!!! \nA continuacion ingrese la operatoria que desea realizar: ");
        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:

                printf("Ingrese valor A: ");
                scanf("%f",&x);
                system("cls");
                break;

            case 2:

                printf("Ingrese valor B: ");
                scanf("%f",&y);
                system("cls");
                break;

            case 3:

                printf("Suma: %.2f\n",sumar(x,y));
                printf("Presione ENTER para continuar operando...");
                getch();
                system("cls");
                break;

            case 4:

                printf("Resta: %.2f\n",restar(x,y));
                printf("Presione ENTER para continuar operando...");
                getch();
                system("cls");
                break;

            case 5:

                printf("Division: %.2f\n",dividir(x,y));
                printf("Presione ENTER para continuar operando...");
                getch();
                system("cls");
                break;

            case 6:

                printf("Multiplicacion: %.2f\n",multiplicar(x,y));
                printf("Presione ENTER para continuar operando...");
                getch();
                system("cls");
                break;

            case 7:

                printf("Factorial: %.2f\n",factorial(x));
                printf("Presione ENTER para continuar operando...");
                getch();
                system("cls");
                break;

            case 8:

                aux=sumar(x,y);
                printf("Suma: %.2f\n",aux);

                aux=restar(x,y);
                printf("Resta: %.2f\n",aux);

                aux=dividir(x,y);
                printf("Division: %.2f\n",aux);

                aux=multiplicar(x,y);
                printf("Multiplicacion: %.2f\n",aux);

                aux=factorial(x);
                printf("Factorial: %.2f\n",aux);

                printf("Presione ENTER para continuar operando...");
                getch();
                system("cls");
                break;

            case 9:

                printf("Aplicacion finalizada, presione ENTER para concluir...");
                getche();
                system("cls");
                seguir = 'n';
                break;

            default:
                printf("Opcion invalida, seleccione una opcion numerica dentro del rango numerico detallado...");
                break;
        }

    }
    return 0;
}

