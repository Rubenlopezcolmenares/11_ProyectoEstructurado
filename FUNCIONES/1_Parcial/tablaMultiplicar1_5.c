/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que muestra las tablas del 1 al 5                    */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
int num(int , int );

/*Declaración de la función principal*/
int main(void)
{
	int cont,x;
	printf("Programa que muestra la tabla del multplicar 1 a 5\n\n");
	for(cont=1; cont <=5; cont++)
	{
		for(x=1;x<=10;x++)
		{
		printf("%d\tX\t%d\t=\t%d\n", cont,x, num(x, cont));
		}
		printf("\n");
	}
	return 0;
}

/*Cuerpo de la funcion*/
int num(int x , int cont )
{
return x *cont;
}
