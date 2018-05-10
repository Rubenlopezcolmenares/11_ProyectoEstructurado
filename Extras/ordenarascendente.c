/*---------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                     */
/*E-mail: rubencolmenares1999@gmail.com                                            */
/*Fecha: 09/05/2018                                                                */
/*Fecha de actualizacion:                                                          */
/* Descripcion: Programa que lea 10 números  y los ordene de forma ascendente.     */
/*---------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*declaracion de la funcion principal*/
int main()
{
 float aux, numeros[10];
 int i,j,n=10;

 for (i=0;i<n;i++){
                   printf("Escriba un número\n");
                   scanf("%f",&numeros[i]);
     }

 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
      if(numeros[i]<numeros[j])
      {
          aux=numeros[i];
          numeros[i]=numeros[j];
          numeros[j]=aux;
      }
  }
 }
printf("Los numeros en orden ascendente son: \n");
 for (i=n-1;i>=0;i--){
     printf("%f\n",numeros[i]);
 }

 return 0;
}
