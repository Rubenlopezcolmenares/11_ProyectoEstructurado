/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que te dice si puedes votar o no                     */
/*----------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*Prototipo de la funcion*/
int votar(int);

/*declaracion de la funcion principal*/
int main(void)
{
int E;
printf("Programa que te dice si pudes votar\n\n");
printf("Introduzca la edad\n");
scanf("%d",&E);
votar(E);

return 0;
}

/*Cuerpo de la funcion*/
int votar(int edad)
{
  if(edad >= 18)
  {
    printf("Usted Podra votar en las proximas elecciones\n");
  }
  else
  {
    printf("Usted no puede votar\n");
  }
}
