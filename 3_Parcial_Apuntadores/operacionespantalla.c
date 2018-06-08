/*----------------------------------------------------------------*/
/* Autor: Ruben Lopez Colmenares	  														  */
/* E-mail: rubencolmenares1999@gmail.com                          */
/* Fecha creacion: 02/06/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de Punteros que muestran datos en  */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L    D E    R O P A" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de Ropa");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de Ropa");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de ropa Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de ropa Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar Ropa");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar Ropa");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar Ropa");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}


void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-12s|%-10s|%-10s|\tCOLOR\t|", "MATERIAL", "TALLA", "MARCA");
  printf("\n---------------------------------------------------------------------------\n");
}

void mostrarRopa(Ropa ropa)
{

  printf(_TBLANCO _NEGRITA);
  printf("%-12s|%-10d|%-10s|\t%s\t", ropa.Material, ropa.Tamanio, ropa.Marca, ropa.Color);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
