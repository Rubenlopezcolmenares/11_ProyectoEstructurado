/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que nos muestra la distancia entre dos puntos        */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>
#include <math.h>

/*Prototipo de la funcion*/
void dis();

/*Declaracion de la funcion principal*/
int main(void)
{
dis();
return 0;
}

/*Cuerpo de la funcion*/
void dis()

{
  float x1,x2,y1,y2,dis;
printf("Programa de Pitagoras\n\n");
printf("ingrese el valor de X1\n");
scanf("%f",&x1);
printf("ingrese el valor de Y1\n");
scanf("%f",&y1);
printf("ingrese el valor de X2\n");
scanf("%f",&x2);
printf("ingrese el valor de Y2\n");
scanf("%f",&y2);

dis=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
printf("La distancia entre los dos puntos es: %.2f\n",dis);

}
