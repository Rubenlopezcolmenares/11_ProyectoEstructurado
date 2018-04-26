/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 25/04/2018                                                           */
/*Fecha de actualizacion:26/04/2018                                           */
/* Descripcion: Programa que muestra numeros flotantes entre el numero 0-1000 */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Defincion de costantes*/
#define ROW 3 /*NUmero de filas de la matriz*/
#define COL 3 /*NUmero de columnas de la matriz*/
#define MAX 1000 /*Rango superior de datos aleatorios*/

int main(void)
{
  int array[ROW][COL];
  srand((unsigned) time(NULL));

  /*Inicializar el array con los valores enteros aleatorios 1- 1000*/
  for(int i=0;i<ROW;i++) /*ciclo que controla las filas del array*/
    {
    for(int j=0;j<COL; j++) /*ciclo que controla las columnas del array*/
    {
      /*Asignacion de datos del array*/
      /*utilizar la funcio scanf()para pedir los datos al usurio*/

     /*utilizar la funcio scanf()para obtener para obtener datos de forma aleatoria*/
     array[i][j] = rand() % (MAX+1);
     /*tarea el dia viernes 27 de abril*/
     /*Generra valores aleatorios de tipo flotante entres 0- 1000*/
    }
  }
  printf("\x1b[32m Datos aleatorios de la matriz:array[%d][%d]\n",ROW,COL);
  printf("\x1b[42m Otro Mensaje\n");
  printf("\x1b[0m Otro Mensaje\n");

printf("\n");
  for(int i=0;i<ROW;i++) /*ciclo que controla las filas del array*/
    {
      printf("{");
    for(int j=0;j<COL; j++) /*ciclo que controla las columnas del array*/
    {
      printf("%d ", array[i][j]);
    }
    printf("}\n");
   }
return 0;
}
