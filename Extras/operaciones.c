/*-------------------------------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                                           */
/*E-mail: rubencolmenares1999@gmail.com                                                                  */
/*Fecha: 09/05/2018                                                                                      */
/*Fecha de actualizacion:                                                                                */
/* Descripcion: Programa que lea 10 números y muestre la suma, resta, multiplicación y división de todos.*/
/*-------------------------------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*declaracion de la funcion principal*/
int main(void)
{
           int x,tabla[10];
           int sum,res,mul,div;

           for (x=0;x<10;x++)
           {
       printf("Introduzca número\n");
       scanf("%d",&tabla[x]);
   }

           sum=tabla[0];
   res=tabla[0];
   mul=tabla[0];
   div=tabla[0];

           for (x=1;x<10;x++)
           {
       sum=sum+tabla[x];
       res=res-tabla[x];
       mul=mul*tabla[x];
       div=div/tabla[x];
   }

           printf("Suma: %d\n",sum);
           printf("Resta: %d\n",res);
           printf("Multiplicación: %d\n",mul);
           printf("División: %d\n",div);

   return 0;
}
