/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 18/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que suma de los 100 primeros números                 */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

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
	int num,i;
  int suma=1;
  printf("Dame un numero para calcular su factorial\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
  suma=suma*i;
  }
  printf("El Factorial de %d es %d\n",num,suma);
}
