/*----------------------------------------------------------------*/
/* Autor: Ruben Lopez Colmenares	  														  */
/* E-mail: rubencolmenares1999@gmail.com                          */
/* Fecha creacion: 02/06/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion:  implementacion de Punteros sobre la estructura  */
/*              alumno: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int *numRopa;



Ropa crearNuevaRopa(void)
{
  Ropa ropa;

  printf(_TBLANCO _NEGRITA "Introduce el nombre del Material: "              _NNEGRITA _TVERDE);
  fgets(ropa.Material, TAM_NOM, stdin);                                    /* Solicita el material de la ropa al usuario          */
  strcpy(ropa.Material, strtok(ropa.Material, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce la Marca de la Ropa: " _NNEGRITA _TVERDE);
  fgets(ropa.Marca, TAM_NOM, stdin);                         /* Solicita la marca al usuario        */
  strcpy(ropa.Marca, strtok(ropa.Marca, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el color de la Ropa: " _NNEGRITA _TVERDE);
  fgets(ropa.Color, 20, stdin);                         /* Solicita la marca al usuario        */
  strcpy(ropa.Color, strtok(ropa.Color, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el numero de talla de la Ropa: "           _NNEGRITA _TVERDE);
  scanf("%d", &ropa.Tamanio);

  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
  printf("\n\n");

  return ropa;
}




void mostrarListaRopa(Ropa listaRopa[], int ordenar)
{
  int arrayTemp[*numRopa];
  for(int i = 0; i < *numRopa; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaRopa, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaRopa, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < *numRopa; i++)
  {
    mostrarRopa(listaRopa[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarRopa(Ropa listaRopa[])
{
  int opcionBuscar;
  char MaterialBuscar[TAM_MATERIAL];            /* Almacena el material a buscar dentro de la estructura                */
	char MarcaBuscar[TAM_MARCA];         /* Almacena la marca a buscar dentro de la estructura             */

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar ropa por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Material\n");
  printf(_TBLANCO   _NEGRITA "\t2. Marca \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &(opcionBuscar));

  switch(opcionBuscar)
  {
    case _xMaterial:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        printf(_TCYAN _NEGRITA "\n\nIngrese el material de la Ropa: ");
        fgets(MaterialBuscar, TAM_MATERIAL, stdin);
        strcpy(MaterialBuscar, strtok(MaterialBuscar, "\n"));

        for(int i = 0; i < *numRopa; i++)
            if(strcmp(MaterialBuscar, listaRopa[i].Material) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarRopa(listaRopa[i]);
            }
            break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(MarcaBuscar, TAM_NOM, stdin);
          strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

          for(int i = 0; i < numRopa; i++)
          if(strcmp(*MarcaBuscar, listaRopa[i].Marca) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarRopa(listaRopa[i]);
          }
          break;
  }
}



void actualizarRopa(Ropa listaRopa[])
{
  int opcionBuscar;
  char MaterialBuscar[TAM_MATERIAL];            /* Almacena el nombre a buscar dentro de la estructura                */
	char MarcaBuscar[TAM_MARCA];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar la ropa a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Material\n");
  printf(_TBLANCO   _NEGRITA "\t2. Marca \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &(opcionBuscar));

  switch(opcionBuscar)
  {
      case _xMaterial:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
          fgets(MaterialBuscar, TAM_MATERIAL, stdin);
          strcpy(MaterialBuscar, strtok(MaterialBuscar, "\n"));

          for(int i = 0; i < *numRopa; i++)
          {
              if(strcmp(MaterialBuscar, listaRopa[i].Material) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarRopa(listaRopa[i]);

                  printf("\n\n");

                  listaRopa[i] = crearNuevaRopa();

                  mostrarEncabezadoTabla();
                  mostrarRopa(listaRopa[i]);

                  break;
              }
          }
          break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el Material: ");
          fgets(MarcaBuscar, 50, stdin);
          strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

          for(int i = 0; i < *numRopa; i++)
          {
              if(strcmp(MarcaBuscar, listaRopa[i].Marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarRopa(listaRopa[i]);

                  printf("\n\n");

                  listaRopa[i] = crearNuevaRopa();

                  mostrarEncabezadoTabla();
                  mostrarRopa(listaRopa[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarRopa(Ropa listaRopa[])
{
  int opcionBuscar;
  char MaterialBuscar[TAM_MATERIAL];            /* Almacena el nombre a buscar dentro de la estructura                */
	char MarcaBuscar[TAM_MARCA];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar ropa por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. Material\n");
  printf(_TBLANCO   _NEGRITA "2. Marca \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMaterial:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el Material: ");
          fgets(MaterialBuscar, TAM_MATERIAL, stdin);
          strcpy(MaterialBuscar, strtok(MaterialBuscar, "\n"));

          for(int i = 0; i < *numRopa; i++)
          {
              if(strcmp(MaterialBuscar, listaRopa[i].Material) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarRopa(listaRopa[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaRopa));
                    listaRopa = eliminarUnaRopa(listaRopa, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(MarcaBuscar, TAM_MARCA, stdin);
          strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

          for(int i = 0; i < *numRopa; i++)
          {
              if(strcmp(MarcaBuscar, listaRopa[i].Marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarRopa(listaRopa[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaRopa = eliminarUnaRopa(listaRopa, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Ropa * eliminarUnaRopa(Ropa listaRopa[], int posicion)
{
  if(posicion < (*numRopa - 1))
  {
    for(int j = posicion; j < *numRopa-1; j++)
    {
      strcpy(listaRopa[j].Material,          listaRopa[j+1].Material);
      listaRopa[j].Tamanio    = listaRopa[j+1].Tamanio;
      strcpy(listaRopa[j].Marca, listaRopa[j+1].Marca);
      strcpy(listaRopa[j].Color, listaRopa[j+1].Color);

    }
  }

  strcpy(listaRopa[*numRopa-1].Material,          "");
    listaRopa[*numRopa-1].Tamanio     = -1;
  strcpy(listaRopa[*numRopa-1].Marca,       "");
  strcpy(listaRopa[*numRopa-1].Color, "");

  *numRopa--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaRopa;
}
