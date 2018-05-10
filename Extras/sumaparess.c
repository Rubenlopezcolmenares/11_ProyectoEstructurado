/*-------------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                         */
/*E-mail: rubencolmenares1999@gmail.com                                                */
/*Fecha: 09/05/2018                                                                    */
/*Fecha de actualizacion:                                                              */
/* Descripcion: Programa que rellene los 100 primeros números pares y muestre su suma. */
/*-------------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*declaracion de la funcion principal*/
int main(void)
{
           int x,sum,i,tabla[100];

           i=0;
           sum=0;
           for (x=1;x<=100;x++)
           {
       /*cont=0;*/
       if (x%2==0)
       {
          tabla[i]=x;
          i++;
       }
   }

           for (x=0;x<i;x++)
           {
       sum=sum+tabla[x];
   }

   printf("La suma de los 100 primeros numeros pares es: %d\n",sum);


   return 0;
}
