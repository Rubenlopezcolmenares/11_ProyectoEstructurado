/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que suma de los 100 primeros números                 */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
void suma();

/*Declaración de la función principal*/
int main()
{
suma();
  return 0;
}


/*Cuerpo de la funcion*/
void suma()
{
  int suma=0,x;

  for(x=1;x<=100;x++)
  {
    suma=suma+x;

  }
    printf("la suma de los 100 primeros numeros es:%d\n",suma );
}
