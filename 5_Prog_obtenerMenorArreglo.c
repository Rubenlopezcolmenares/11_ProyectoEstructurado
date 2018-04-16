/* Autor: Ruben Lopez Colmenares                                         */
/* E-mail: rubencolmenares1999@gmail.com                                     */
/* Fecha de creaciÃ³n: 11/04/2018                                        */
/* Fecha de actualizaciÃ³n: 11/04/2018                                   */
/* DescripciÃ³n: este programa encuentra el nÃºmero menor en un arreglo  */
/*              unidimencional de enteros.                               */


/* DeclaraciÃ³n de bibliotecas de cabecera */
#include <stdio.h>


#define TAM 10 /* DeclaraciÃ³n de constante */


/* ImplementaciÃ³n del cuerpo del programa */
int main(void)
{
  int arreglo[TAM] = {7, 1, 2, 0, 5, 6, 4, 3, 9, 8}; /* DeclaraciÃ³n e inicializaciÃ³n del arreglo */

  int menor = arreglo[0]; /* Se asigna a la variable mayor el primer elemento del arreglo */

  /* Se evalÃºa cada una de las posiciones del arreglo para hallar el nÃºmero mayor*/
  /* Se inicializa i con 1, para no evaluar la posiciÃ³n 0. */
  for(int i = 1; i < TAM; i++)
  {
    if(menor > arreglo[i])
      menor = arreglo[i];
  }

  printf("El nÃºmero menor es: %d\n", menor);
  return 0;
}
