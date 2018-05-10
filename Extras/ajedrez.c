/*-------------------------------------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                                           */
/*E-mail: rubencolmenares1999@gmail.com                                                                  */
/*Fecha: 09/05/2018                                                                                      */
/*Fecha de actualizacion:                                                                                */
/* Descripcion: Programa que pinte un tablero de ajedrez, los peones con la letra P, las torres con T,   */
/*los caballos con C, los alfiles con A, el rey con R y la reina con M.                                  */
/*-------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

   int x,y;

   for (x=0;x<8;x++)
   {
       for (y=0;y<8;y++)
       {
           //peones
           if (x==1 || x==6)
           {
            printf("P");
           }
           //torres
           else if ((x==0 && y==0) ||
                   (x==7 && y==0) ||
                   (x==0 && y==7) ||
                   (x==7 && y==7)
                   )
           {
            printf("T");
           }
           //caballos
           else if ((x==0 && y==1) ||
                   (x==7 && y==1) ||
                   (x==0 && y==6) ||
                   (x==7 && y==6)
                   )
           {
            printf("C");
           }
           //alfiles
           else if ((x==0 && y==2) ||
                   (x==7 && y==2) ||
                   (x==0 && y==5) ||
                   (x==7 && y==5)
                   )
           {
            printf("A");
           }
           //reina
           else if ((x==0 && y==3) ||
                   (x==7 && y==3)
                   )
           {
            printf("M");
           }
           //rey
           else if ((x==0 && y==4) ||
                   (x==7 && y==4)
                   )
           {
            printf("R");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }


   return 0;

}
