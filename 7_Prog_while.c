/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 14/04/2018                                                           */
/*Fecha de actualizacion:15/04/2018                                           */
/* Descripcion: Programa que simula el ciclo while                            */
/*----------------------------------------------------------------------------*/
/*Declaración de bibliotecas*/
#include <stdio.h>

/*Declaración de la función principal*/
int main(void)
{
	int num;
	num = 0;
 	while (++num <= 10)
	{
		printf ("Numero de veces que se repite el ciclo: %d\n", num);
	}
	return 0;
}
