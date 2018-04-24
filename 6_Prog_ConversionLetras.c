
/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 20/04/2018                                                           */
/*Fecha de actualizacion:23/04/2018                                           */
/* Descripcion: Programa que convierte minusculas a mayusculas y viceversa    */
/*----------------------------------------------------------------------------*/
/*Declaración de bibliotecas*/
#include <stdio.h>

const int tamanio =10; /*Definir una constante*/

/*Declaración de la función principal*/
int main(void)
{
  char c;
  char array[tamanio];
  char array2[tamanio];

  int index=0;
  int cadena=0;
  while((c=getchar()) != '\n')/*leer caracterr a caracter*/
  {
    if(c>=97 && c<=122) /*Validando Univcamiente caracteres:letras minusculas*/
    {
      c=c-32;
    array[index]=c;
     index++;
     }
}


     printf(" \n");
     for (int i=0;i <tamanio;i++)
     {
       printf(" %c",array[i]);
     }
  printf(" \n");
index=0;
  while((c=getchar()) != '\n')/*leer caracterr a caracter*/
  {
    if(c>=65 && c<=90) /*Validando Univcamiente caracteres:letras MAYUSCULAS*/
    {
      c=c+32;
    array2[index]=c;
     index++;
     }
   }
   for (int B=0;B <tamanio;B++)
   {
     printf(" %c",array2[B]);
   }
  printf(" \n");

  return 0;
}
