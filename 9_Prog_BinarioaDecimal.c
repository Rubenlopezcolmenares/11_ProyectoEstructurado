/*---------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                     */
/*E-mail: rubencolmenares1999@gmail.com                                            */
/*Fecha: 24/04/2018                                                                */
/*Fecha de actualizacion:25/04/2018                                                */
/* Descripcion: Programa que convierte un numero binario a numero decimal          */
/*---------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <math.h>

int main(void)
{

  const int dim=5;
int suma,i,num[dim];

for (i=0;i<dim;i++)
{
printf("Ingrese el numero binario uno por uno el 0 - 1 \n");
scanf("%d",&num[i]);
}
for (i=0;i<dim;i++)
{
  suma=suma+num[i]*pow(2,i);
}
printf("%d",suma);
 return 0;
}
