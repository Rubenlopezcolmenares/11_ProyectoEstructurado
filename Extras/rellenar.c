/*-------------------------------------------------------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                                                                   */
/*E-mail: rubencolmenares1999@gmail.com                                                                                          */
/*Fecha: 09/05/2018                                                                                                              */
/*Fecha de actualizacion:                                                                                                        */
/* Descripcion: Programa que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden ascendente.*/
/*-------------------------------------------------------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*declaracion de la funcion principal*/
int main(void)
{
           int x,tabla[100];

           for (x=1;x<=100;x++)
           {
       tabla[x]=x;
   }
printf("Los 100 primeros numeros en orden ascendente son:\n");
           for (x=1;x<=100;x++)
           {

       printf("%d\n",tabla[x]);
   }


   return 0;
}
