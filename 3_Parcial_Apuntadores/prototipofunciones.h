/*----------------------------------------------------------------*/
/* Autor: Ruben Lopez Colmenares	  														  */
/* E-mail: rubencolmenares1999@gmail.com                          */
/* Fecha creacion: 02/06/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_MATERIAL      12        /* Tamaño del material de la ropa               */
#define TAM_ROPA    10        /* Tamaño de la Ropa                                  */

#define TAM_MARCA    10        /* Tamanio de la Marca de la Ropa                    */
#define TOTAL_ROPA 10        /* Tamanio total de Ropa                               */


/* Se define una estructura para modelar los datos de una Ropa.    */
/* Los miembros de la estructura son:                              */
/*                                    - Material                   */
/*                                    - Tamaño                     */
/*                                    - Marca                      */
/*                                    - color                      */

typedef struct
{
	char *Material[TAM_MATERIAL];
	int *Tamanio;
	char *Marca[TAM_MARCA];
	char *Color[20];

}Ropa;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarRopa(Ropa);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de Ropa */
Ropa crearNuevaRopa(void);
void mostrarListaRopa(Ropa [], int);
void buscarRopa(Ropa []);
void actualizarRopa(Ropa []);
void eliminarRopa(Ropa []);


/* Funcion que permite eliminar Ropa, es invocada por la funcion eliminarRopa() */
Ropa * eliminarUnaRopa(Ropa [], int);


/* Funciones que permiten ordenar los datos de los alumnos */
int * ordenarAscendente(Ropa [], int []);
int * ordenarDescendente(Ropa [], int []);


#endif
