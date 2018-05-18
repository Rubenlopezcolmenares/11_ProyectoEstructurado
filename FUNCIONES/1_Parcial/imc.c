/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que calcula el IMC                                   */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
float imc(float , float);

/*Declaración de la función principal*/
int main(void)
{
  float peso, estatura;
  printf("Programa que calcula el IMC\n\n");
  printf("Dame tu peso en kilogramaos\n");
  scanf("%f",&peso);
  printf("Dame tu estaura en metros\n");
  scanf("%f",&estatura);
  printf("Tu imc es de %f\n",imc(peso,estatura));
  return 0;
  }
  /*Cuerpo de la funcion*/
  float imc(float peso , float estatura)
{
return (peso)/(estatura*estatura);
}
