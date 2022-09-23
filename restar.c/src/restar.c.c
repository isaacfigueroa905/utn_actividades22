/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/******************************************************************************

FIGUEROA ISAAC
Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
 int Restar1(int, int);
 int Restar2(void);
 void Restar3(int, int);
 void Restar4(void);
*******************************************************************************/
#include <stdio.h>
int Restar1(int, int);
int main()
{
	setbuf(stdout,NULL);
    int primerNumero;
    int segundoNumero;
    int diferencia;

    printf("ingrese un numero: ");
    scanf("%d",&primerNumero);

    printf("ingrese otro numero: ");
    scanf("%d",&segundoNumero);

    diferencia=Restar1(primerNumero,segundoNumero);

    printf("el resultado es : %d",diferencia);

    return 0;
}
int Restar1(int numeroA, int numeroB)
{
    int resultado;

    resultado=numeroA-numeroB;

    return resultado;
}
