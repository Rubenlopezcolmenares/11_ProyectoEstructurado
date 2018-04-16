/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 14/04/2018                                                           */
/*Fecha de actualizacion:15/04/2018                                           */
/* Descripcion: Programa que ordena un arreglo de numeros en Orden Ascendente */
/*----------------------------------------------------------------------------*/
/*Declaración de bibliotecas*/
#include <stdio.h>

/*Declaración de la función principal*/
int main(void)
{
	int arreglo[11] = {6,10,3,1,5,9,0,7,2,4,8}, aux,i,j;
	for (int i = 0; i < 11; ++i)
	{
		for (int j = i+1; j < 11; ++j)
		{
			if (arreglo[i]>arreglo[j])
			{
				aux = arreglo[j];
				arreglo[j] = arreglo[i];
				arreglo[i] = aux;
			}
		}
	}
		printf("Los Numeros en Orden Ascendente son:\n");
			for (int i = 0; i < 11; ++i)
				{
					printf("%d\n", arreglo[i] );
				}
return 0;
    }
