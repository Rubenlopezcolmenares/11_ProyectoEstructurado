/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que nos muestra la suma de los 100 primeros numeros  */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*Prototipo de la funcion*/
void suma();

/*Declaración de la función principal*/
int main(void)
{
  suma();
    return 0;
  }

  /*Cuerpo de la funcion*/
  void suma()
  {
  int suma=0, P;
  int N=100;

  P=N+1;
  suma=(N*P)/2;
{
printf("La suma de los 100 primeros numeros es %d\n",suma);
}

   }
