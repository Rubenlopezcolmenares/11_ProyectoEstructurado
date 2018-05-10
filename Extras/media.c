/*-------------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                         */
/*E-mail: rubencolmenares1999@gmail.com                                                */
/*Fecha: 09/05/2018                                                                    */
/*Fecha de actualizacion:                                                              */
/* Descripcion: Programa que lea 10 números y muestre la media.                       */
/*-------------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*declaracion de la funcion principal*/
int main()
{
 float sum, numeros1[10];
 int i;

 sum=0;
 for (i=0;i<10;i++){
                   printf("Escriba un número\n");
                   scanf("%f",&numeros1[i]);
     }

 for(i=0;i<10;i++)
 {
  sum=sum+numeros1[i];
 }

 printf("La media de los numeros ingresados es :%.2f\n",sum/10);


 return 0;
}
