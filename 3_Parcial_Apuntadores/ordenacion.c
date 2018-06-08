/*----------------------------------------------------------------*/
/* Autor: Ruben Lopez Colmenares	  														  */
/* E-mail: rubencolmenares1999@gmail.com                          */
/* Fecha creacion: 02/06/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int *numRopa;

int * ordenarAscendente(Ropa listaRopa[], int arrayTemp[])
{
  for(int i = 0; i < *numRopa; i++)
  {
    for(int j = i + 1; j < *numRopa; j++)
    {
      if(strcmp(listaRopa[arrayTemp[i]].Material, listaRopa[arrayTemp[j]].Material) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Ropa listaRopa[], int arrayTemp[])
{
  for(int i = 0; i < *numRopa; i++)
  {
    for(int j = i + 1; j < *numRopa; j++)
    {
      if(strcmp(listaRopa[arrayTemp[i]].Material, listaRopa[arrayTemp[j]].Material) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
