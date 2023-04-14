//
// Created by Álvaro on 14/04/2023.
//

#include "funciones.h"
#include <stdio.h>
int menu(){
    int opcion;
    printf("Menu de agenda de contactos\n");
    printf("------------------------------------\n");
    printf("1 - Listado de personas\n");
    printf("2 - Nueva persona\n");
    printf("3 - Borrar persona\n");
    printf("4 - Exportar agenda de fichero de texto\n");
    printf("5 - Importar agenda de fichero de texto\n");
    printf("0 - Salir\n");
    printf("------------------------------------\n");
    printf("Selecione su opcion:\n");
    scanf("%i", &opcion);
    return opcion;
}