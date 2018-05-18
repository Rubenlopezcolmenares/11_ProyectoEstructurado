/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que calcula el area de un terreno                    */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>
/*Prototipo de la funcion*/
float area(int , int );

/*Declaración de la función principal*/
int main(void)
{
float base, altura;
printf("Programa que calcula el area de un Rectangulo\n\n");
printf("Dame la base\n");
scanf("%f",&base);
printf("Dame la altura\n");
scanf("%f",&altura);
printf("La area es %.2f\n", area(base,altura));
return 0;
}
/*Cuerpo de la funcion*/


float area(int base, int altura)
{
return base*altura;
}
