/*----------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                      */
/*E-mail: rubencolmenares1999@gmail.com                                             */
/*Fecha: 17/05/2018                                                                 */
/*Fecha de actualizacion:                                                           */
/* Descripcion: Programa que muestra los 100 primeros numeros y suma de par e impar */
/*----------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*Prototipo de la funcion*/
void resul();



/*declaracion de la funcion principal*/
void main(void)
{
resul();
return 0;
}


/*Cuerpo de la funcion*/
void resul()
{
  int x,sumaP,sumaI;
  printf("los numeros del 1 al 100 son");
  for (x=1;x<=100;x++)
  {
    printf("%d \n",x);
    if (x%2==0)
    {
    sumaP=sumaP+x;
  }
    if (x%2==1)
    {
    sumaI=sumaI+x;
  }
  }
  printf("los suma de los numeros pares es %d \n",sumaP);
  printf("los suma de los numeros impares es %d \n",sumaI);

}
