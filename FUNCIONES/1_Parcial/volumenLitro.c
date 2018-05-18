/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que calcula cuantos litros se almacenara en untanque */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
float vol(float , float, float );

/*Declaración de la función principal*/
int main(void)
{
  float largo, altura, ancho;
  printf("Programa que calcula el volumen en litros\n\n");
  printf("Dame el largo\n");
  scanf("%f",&largo);
  printf("Dame el ancho\n");
  scanf("%f",&ancho);
  printf("Dame la altura\n");
  scanf("%f",&altura);
  printf("El volumen es %.2f litros cubicos\n", vol(largo, altura, ancho));
  return 0;
  }

  /*Cuerpo de la funcion*/
  float vol(float largo , float altura, float ancho)
{
  float vol=largo*altura*ancho;
return vol;
}
