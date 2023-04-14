//
// Created by Álvaro on 14/04/2023.
//

#include "funciones.h"
#include <stdio.h>
void menu(){
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
}

void estructuraPrincipal(){
    int opcion;
    do {
        printf("Selecione su opcion:");
        scanf("%i", &opcion);
        switch (opcion) {
            case 0:
                printf("Saliendo del menu");
                break;
            case 1:
                printf("Ha seleccionado la opcion de ver su agenda de contactos\n");
                break;
            case 2:
                printf("Ha selccionado la opcion de a%cadir un nuevo conatcto\n", 164);
                break;
            case 3:
                printf("Ha seleccionado la opcion de borrar un nuevo contacto\n");
                break;
            case 4:
                printf("Ha seleccionado la opcion de exportar una agenda en fichero de texto\n");
                break;
            case 5:
                printf("Ha seleccionado la opcion de importar una agenda en fichero de tipo texto\n");
                break;
            default:
                printf("La entrada es incorrecta, pruebe de nuevo:\n");
                scanf("%i", &opcion);
                break;
        }
    } while(opcion != 0);
}