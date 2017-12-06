#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

/**
* \brief Se calcula suma.
* \param Se obtiene la suma de X e Y en Z.
* \return Se retorna resultado Z.
*
*/

float sumar(float x, float y)
{
    float z;

    z=x+y;

    return z;
}

/**
* \brief Se calcula resta.
* \param Se obtiene la restan de X e Y en Z.
* \return Se retorna resultado Z.
*
*/

float restar(float x, float y)
{
    float z;

    z=x-y;

    return z;
}

/**
* \brief Se calcula multiplicación.
* \param Se obtiene la multiplican de X e Y en Z.
* \return Se retorna resultado Z.
*
*/

float multiplicar(float x, float y)
{
    float z;

    z=x*y;

    return z;
}

/**
* \brief Se calcula division.
* \param Se obtiene la dividen de X e Y en Z.
* \return Se retorna resultado Z.
*
*/

float dividir(float x, float y)

{
    float z;

    while(x==0)
    {
        printf("ERROR, ingrese un valor A distinto de cero: ");
        scanf("%f",&x);
        system("cls");
    }

    while(y==0)
    {
        printf("ERROR, ingrese un valor B distinto de cero: ");
        scanf("%f",&y);
        system("cls");
    }

    z=x/y;

    return z;
}

/**
* \brief Se calcula factorial.
* \param Se obtiene el factorial de X en F.
* \return Se retorna resultado F.
*
*/

float factorial(float x)

{
    int f=1,i;

    while(x<=0)
    {
        printf("ERROR, ingrese un valor positivo o distinto de cero: ");
        scanf("%f",&x);
    }

    for(i=1; i<=x; ++i)
    {
        f*=i;
    }

    return f;
}


