/*----------------------------------------------------------------*/
/* Autor: Ruben Lopez Colmenares	  														  */
/* E-mail: rubencolmenares1999@gmail.com                          */
/* Fecha creacion: 02/06/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: programa para ejemplificar archivos .h y .c       */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colres            */
#include "enums.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                       /* Los #define estan en el archivo prototipofunciones.h                */

int *numRopa;                           /* Variable global: se define aqui en el main, pero se utiliza,       */
                                       /* manteniendo su valor en operacionesRopa.c y ordenacion.c            */

int main(void)
{
  Ropa listaRopa[TOTAL_ROPA];          /* Declaracion de una variable de arreglo de estructura Ropa[]         */
	int opcion;                          /* Variable que ontrola las opciones del menu principal.               */

	do{
    menuPrincipal();                   /* Se llama (invoca) a la funcion menuPrincipal() implementada en      */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case INSERTAR:
              while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     R O P A\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de Ropa: " _TVERDE);
							scanf("%d",&(*numRopa));
							printf("\n\n" _ARESET);

							for(int i = 0; i < *numRopa; i++)
							{
                while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salto de linea                */
                listaRopa[i] = crearNuevaRopa();       /* Se invoca a la funcion crearNuevaRopa() implementada en operacionesRopa.c  */
              }
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea                */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR:
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    R O P A\n\n");
              mostrarListaRopa(listaRopa, 0);          /* Se invoca a la funcion mostrarRopa() implementada en operacionesRopa.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ORDENAR_ASCENDENTE:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. O R D E N A R    A S C E D E N T E\n\n");
              mostrarListaRopa(listaRopa, 1);          /* Se invoca a la funcion mostrarRopa() implementada en operacionesRopa.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ORDENAR_DESCENDENTE:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. O R D E N A R   D E S C E D E N T E\n\n");
              mostrarListaRopa(listaRopa, 2);          /* Se invoca a la funcion mostrarRopa() implementada en operacionesRopa.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
              buscarRopa(listaRopa);                   /* Se invoca a la funcion buscarRopa() implementada en operacionesRopa.c      */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarRopa(listaRopa);               /* Se invoca a la funcion actualizarRopa() implementada en operacionesRopa.c  */
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarRopa(listaRopa);                 /* Se invoca a la funcion eliminarRopa() implementada en operacionesRopa.c    */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	}while(opcion != SALIR);

	return 0;
}
