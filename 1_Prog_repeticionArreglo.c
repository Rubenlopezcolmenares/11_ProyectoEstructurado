/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 12/03/2018                                                           */
/*Fecha de actualizacion:13/03/2018                                           */
/* Descripcion: Programa que muestre cuantas veses se repite el mismo numero  */
/*----------------------------------------------------------------------------*/
/*Declaración de bibliotecas*/
#include <stdio.h>

#define MAX 10

/*Declaración de la función principal*/
int main(void)
{
int arreglo[MAX] = {0,1,2,3,4,5,6,7,8,9};
int contador=0;
int i,j;
for(i=0;i<MAX;i++)
{
  contador=0;
for(j=0;j<MAX;j++)
{
if (i==arreglo[j])
contador++;

}
printf("El numero %d se repite %d veces\n",i,contador);

}
return 0;
}
