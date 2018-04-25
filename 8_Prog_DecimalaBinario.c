/*Autor:Ruben Lopez Colmenares                                                               */
/*E-mail: rubencolmenares1999@gmail.com                                                      */
/*Fecha: 24/04/2018                                                                          */
/*Fecha de actualizacion:24/04/2018                                                          */
/* Descripcion: Programa que convierte un numero decimal a binario                           */
/*-------------------------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>


/*Declaracion de la funcion principal*/
int main(void)
{
int num,a,b;
	printf("Dame un numero para convertirlo a binario\n");
	scanf("%d",&num);
	a=num/2;
while(a>1)
 {
b=num%2;
printf("%d",b);
a=num/2;
num=a;
 }
printf("%d\n",a);
return 0;
}
