#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main() {
    int opcion;
    char opcionS[10];
    int tamActual = 5;
    int contadorPersonas = 0;
    tContacto *agenda;
    agenda = (tContacto *)malloc(tamActual*sizeof(tContacto));
    do{
        menu();
        printf("Seleccione su opcion:");
        gets(opcionS);
        opcion = atoi(opcionS);
        switch (opcion) {
            case 0:
                printf("Proceso finalizado");
                break;

            case 1:
                printf("Ha seleccionado la opcion de ver su agenda de contactos\n");
                verAgenda(agenda, contadorPersonas);
                break;

            case 2:
                printf("Ha selccionado la opcion de a%cadir un nuevo conatcto\n", 164);
                aniadirContacto(agenda, contadorPersonas);
                contadorPersonas++;
                if (contadorPersonas==tamActual){
                    tamActual+=5;
                    agenda = (tContacto *) realloc(agenda, (tamActual)* sizeof(tContacto));
                }
                break;

            case 3:
                printf("Ha seleccionado la opcion de borrar un nuevo contacto\n");
                borrarContacto(agenda, contadorPersonas);
                contadorPersonas--;
                break;

            case 4:
                printf("Ha seleccionado la opcion de exportar una agenda en fichero de texto\n");
                break;

            case 5:
                printf("Ha seleccionado la opcion de importar una agenda en fichero de tipo texto\n");
                break;

            default:
                printf("La entrada es incorrecta, pruebe de nuevo:\n");
                break;
        }
    }while(opcion != 0);

    free(agenda);
    return 0;
}
