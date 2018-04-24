/*---------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                     */
/*E-mail: rubencolmenares1999@gmail.com                                            */
/*Fecha: 19/04/2018                                                                */
/*Fecha de actualizacion:22/04/2018                                                */
/* Descripcion: Programa que muestra los valores de constantes  */
/*---------------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>


/*Declaracion de enum*/
/*Tipo identificador{lista_de_identificadores};*/
/*Tarea Para El Dia Lunes; Imprimirvar1,var2,var3*/

enum dias{L,M,MI,J,V,S,D};
enum meses{EN,FE,MA,AB,MAY,JUN,JUL,AG,SE,OC,NO,DI};
enum frutas{manzana, mango, durazno, pera, uva, pina};

enum precioauto{nuevo=10, seminuevo=-5, usado, inservible};

enum {PROG,MATEDIS,MATEII,TGS,ELECT}var1,var2,var3;

int main(void)
{
  printf("%d\n",usado);
  printf("%d\n",var1);
  printf("%d\n",var2);
  printf("%d\n",var3);
  for(enum meses index = EN; index <DI;index++)
  {
    printf("%d ", index);

  switch(index)
  {
    case EN:
    printf("\nEnero\n");
    break;
    case OC:
    printf("\nOctubre\n");
    break;
   }
   printf("%d ", var1);
  }

  return 0;

}
