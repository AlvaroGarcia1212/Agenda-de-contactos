//
// Created by Álvaro on 14/04/2023.
//

#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

tContacto *aumentaAgenda(tContacto *lista, int *tamActual){
    lista = realloc(lista, (*tamActual+5)*sizeof(tContacto));
    *tamActual+=5;
    return lista;
}

tContacto *aumentaAgenda2(tContacto *lista, int *tamActual){
    realloc(lista, (5+*tamActual) * sizeof(tContacto *));
}

void verAgenda(tContacto *lista, int numPersonas){
    if (numPersonas==0) printf("Su agenda no tiene ningun contacto");
    else {
        for (int i = 0; i < numPersonas; i++) {
            printf("%i;%s;%s;%s;%i;%i\n", i + 1, (lista+numPersonas-1)->nombre, (lista+numPersonas-1)->apellido,
                   (lista+numPersonas-1)->num, (lista+numPersonas-1)->edad, (lista+numPersonas-1)->tipoContacto);
        }
    }
}


void aniadirContacto(tContacto *agenda, int numPersonas){
    agenda = realloc(agenda, sizeof(tContacto)*(1+numPersonas));
    printf("Nombre:");
    fgets((agenda+numPersonas)->nombre, 80, stdin);
    arreglar((agenda+numPersonas)->nombre);
    printf("Apellidos:");
    fgets((agenda+numPersonas)->apellido, 80, stdin);
    arreglar((agenda+numPersonas)->apellido);
    printf("Numero:");
    fgets((agenda+numPersonas)->num, 80, stdin);
    arreglar((agenda+numPersonas)->num);
}

tContacto *iniciarLista(int tam){
    tContacto *agenda;
    agenda = (tContacto *)malloc(sizeof(tContacto)*tam);
    return agenda;
}

void arreglar(char *palabra){
    int aux = 0;
    for (int i = 0; i<250 && aux == 0; i++){
        if (palabra[i] == '\n') palabra[i] = '\0';
    }
}