/*------------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                        */
/*E-mail: rubencolmenares1999@gmail.com                                               */
/*Fecha: 17/05/2018                                                                   */
/*Fecha de actualizacion:                                                             */
/* Descripcion: Programa que te dice si el numero es par o impar, y positivo  negativo*/                                 */
/*------------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*Prototipo de la funcion*/
int resul(int );

/*Declaracion de la funcion principal*/
int main(void)
{
    int num;
           printf("escribe un número:\n");
           scanf("%d",&num);
           resul(num);
           return 0;
           }


int resul(int num);
   if (num%2==0) {
      printf("Es par\n");
   }
   else
   {
      printf("Es impar\n");
   }

   if (num<0) {
      printf("Es Negativo\n");
   }
   else
   {
      printf("Es Positivo\n");
   }
   return 0;
}
