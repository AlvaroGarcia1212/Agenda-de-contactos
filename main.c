#include <stdio.h>
#include "funciones.h"

int main() {
    menu();
    int opcion;
    do {
        printf("Selecione su opcion:");
        scanf("%i", &opcion);
        switch (opcion) {
            case 0:
                printf("Ha decidido salir del menu");
                break;
            case 1:
                printf("Ha seleccionado la opcion de ver su agenda de contactos\n");
                break;
            case 2:
                printf("Ha selccionado la opcion de añadir un nuevo conatcto\n");
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
    return 0;
}
