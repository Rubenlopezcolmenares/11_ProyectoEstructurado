#include <stdio.h>
#include <stdbool.h> /*Valores Booleanos*/

#define ROW 10
#define COL 10

bool validarSumaMatriz(int filaA, int colA, int filaB, int colB);
void leerDatosMatriz(int matrizA[ROW][COL], int fila, int col);
void imprimirMAtriz(int matrizA[ROW][COL], int fila, int col);
void sumarMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matrizResultado[ROW][COL], int fila, int col);

int main (void)
{
  int filaA, colA;
  int filaB, colB;

  int matrizA[ROW][COL];
  int matrizB[ROW][COL];
  int matrizResultado[ROW][COL];

  printf("\nIntroduce la fila de la matriz A: \n");
  scanf ("%d",&filaA);

  printf("\nIntroduce la columna de la matriz A: \n");
  scanf ("%d",&colA);

  printf("\nIntroduce la fila de la matriz B: \n");
  scanf ("%d",&filaB);

  printf("\nIntroduce la columna de la matriz B:\n ");
  scanf ("%d",&colB);

  if(validarSumaMatriz(filaA, colA, filaB, colB)== true)
  {
      leerDatosMatriz(matrizA, filaA, colA);
      leerDatosMatriz(matrizB, filaB, colB);

      imprimirMAtriz(matrizA,filaA, colA);
      imprimirMAtriz(matrizB, filaA, colB);

      sumarMatriz(matrizA, matrizB, matrizResultado, filaA, colA);

      printf("El resulatdo de la suma es: \n");
      imprimirMAtriz(matrizResultado,filaA,colB);
    /*Realizra la funcion*/
  }else{
    printf("No se puede realizar la suma de matrices\n");
  }
   return 0;
}


void sumarMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matrizResultado[ROW][COL], int fila, int col)
{
  for(int i=0;i<fila;i++)
  {
    for(int j=0;j<col;j++)
    {
      matrizResultado[i][j]=matrizA[i][j] + matrizB[i][j];
    }
  }
}


void leerDatosMatriz(int matrizA[ROW][COL], int fila, int col)
{
  printf("\n\n");
  for (int i=0;i<fila;i++)
  {
    for(int j=0;j<col;j++)
    {
      printf("Introduce el Elemento [%d][%d]",i,j);
      scanf("%d", &matrizA[i][j]);
    }
  }
}


void imprimirMAtriz(int matrizA[ROW][COL], int fila, int col)
{
  printf("\n\n");
  for (int i=0;i<fila;i++)
  {
    printf("|");
    for(int j=0;j<col;j++)
    {
      printf("%d ", matrizA[i][j]);
    }
    printf("| \n");
  }
}


bool validarSumaMatriz(int filaA, int colA, int filaB, int colB)
{
  if ((filaA==filaB) && (colA ==colB))
  {
    return true;
  }
  return false;
}
