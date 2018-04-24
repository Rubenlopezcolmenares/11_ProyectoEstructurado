/*Autor:Ruben Lopez Colmenares                                                               */
/*E-mail: rubencolmenares1999@gmail.com                                                      */
/*Fecha: 21/04/2018                                                                          */
/*Fecha de actualizacion:22/04/2018                                                          */
/* Descripcion: Programa que mueSTRA 3 Matrices, un cuadrada, una columna y una rectangular  */
/*-------------------------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include<stdio.h>
#include<stdlib.h>
/*Declaracion de la Funcion Principal*/
int main(void)
{
  int matriz[3][3]={{0}},j,i;
  for (i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("introduzca el valor del lugar[%d][%d] de la matriz cuadrada\n",i+1,j+1);
      scanf("%d",&matriz[i][j]);
    }
  }
  int matriz2[1][3]={{0}},m,n;
  for (m=0;m<1;m++)
  {
    for(n=0;n<3;n++)
    {
      printf("\n");
      printf("introduzca el valor del lugar[%d][%d] de la matriz de una columna\n",n+1,m+1);
      scanf("%d",&matriz2[m][n]);
    }
  }

  int matriz3[3][2]={{0}},r,s;
  for (s=0;s<3;s++)
  {
    for(r=0;r<2;r++)
    {
      printf("\n");
      printf("introduzca el valor del lugar[%d][%d] de la matriz rectangular\n",s+1,r+1);
      scanf("%d",&matriz3[s][r]);
    }
  }

  printf("\n\t");
  printf("Matriz Cuadrada de 3x3\n");
  printf("\t\t Matriz Ordenada");
  for(i=0;i<3;i++)
  {
    printf("\n");
    for(j=0;j<3;j++)
    {
      printf("%5d", matriz[i][j]);
    }
  }
  printf("\n");

  printf("\n\t");
  printf("Matriz columna de 1x3\n");
  printf("\t\t Matriz Ordenada");
  for(m=0;m<1;m++)
  {
    printf("\n");
    for(n=0;n<3;n++)
    {
      printf("%5d", matriz2[m][n]);
    }
  }
  printf("\n");

  printf("\n\t");
  printf("Matriz Rectangular de 3x2\n");
  printf("\t\t Matriz Ordenada");
  for(s=0;s<3;s++)
  {
    printf("\n");
    for(r=0;r<2;r++)
    {
      printf("%5d", matriz3[s][r]);
    }
  }
  printf("\n");
   return 0;
}
