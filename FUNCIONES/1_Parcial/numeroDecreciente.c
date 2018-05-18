/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que muestra los numeros del 100 al 0                 */
/*----------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*Prototipo de la funcion*/
int tabla(int );

/*declaracion de la funcion principal*/
int main(void)
{
int x;
        printf("los numeros de 100 al 0 en orden decreciente son:\n");
      for (x=100;x>=0;x--)
      {
      printf("%d\n",tabla(x));
      }
    return 0;
}

/*Cuerpo de la funcion*/
int tabla(int x)
{
  return x;
}
