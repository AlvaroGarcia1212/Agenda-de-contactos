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
            if ((lista+i)->tipoContacto==0){
                printf("%i;%s;%s;%s;%s;FAVORITO\n", i + 1, (lista+i)->nombre, (lista+i)->apellido,
                       (lista+i)->num, (lista+i)->edad);
            }
            if ((lista+i)->tipoContacto==1){
                printf("%i;%s;%s;%s;%s;CONOCIDO\n", i + 1, (lista+i)->nombre, (lista+i)->apellido,
                       (lista+i)->num, (lista+i)->edad);
            }
            if ((lista+i)->tipoContacto==2){
                printf("%i;%s;%s;%s;%s;TRABAJO\n", i + 1, (lista+i)->nombre, (lista+i)->apellido,
                       (lista+i)->num, (lista+i)->edad);

            }
        }
    }
}


void aniadirContacto(tContacto *agenda, int numPersonas){

    int aux;
    char auxC[2];
    //agenda = (tContacto *) realloc(agenda, (1+numPersonas)* sizeof(tContacto));

    printf("Nombre:");
    fgets((agenda+numPersonas)->nombre, 80, stdin);
    arreglar((agenda+numPersonas)->nombre);

    printf("Apellidos:");
    fgets((agenda+numPersonas)->apellido, 80, stdin);
    arreglar((agenda+numPersonas)->apellido);

    printf("Numero:");
    fgets((agenda+numPersonas)->num, 80, stdin);
    arreglar((agenda+numPersonas)->num);

    printf("Edad:");
    fgets((agenda+numPersonas)->edad, MAX, stdin);
    arreglar((agenda+numPersonas)->edad);

    printf("Tipo de contacto:\n");
    printf("1 - Favorito\n");
    printf("2 - Conocido\n");
    printf("3 - Trabajo\n");
    gets(auxC);
    aux = atoi(auxC);
    switch (aux) {
        case 1:
            (agenda+numPersonas)->tipoContacto=0;
            break;
        case 2: (agenda+numPersonas)->tipoContacto=1;
            break;
        case 3:
            (agenda+numPersonas)->tipoContacto=2;
            break;
        default:
            printf("Entrada incorrecta");
            break;
    }
}

void borrarContacto(tContacto *agenda){
    int elem,aux=0;
    char tem[2];
    printf("Introduce el numero de contacto que desea eliminar:");
    fgets(tem, 2, stdin);
    elem = atoi(tem);
    for (int i=0; i<MAX && aux ==0;i++){
        if (i == elem-1){
            strcpy((agenda+i)->nombre, (agenda+elem)->nombre);
            strcpy((agenda+i)->apellido, (agenda+elem)->apellido);
            strcpy((agenda+i)->num, (agenda+elem)->num);
            aux = 1;
        }
    }
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