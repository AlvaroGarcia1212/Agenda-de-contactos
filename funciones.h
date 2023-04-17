//
// Created by Álvaro on 14/04/2023.
//

#ifndef PRACTICA4_FUNCIONES_H
#define PRACTICA4_FUNCIONES_H
#define MAX 250

typedef enum CONTACTO{
    FAVORTO, CONOCIDO, TRABAJO
}tTipo;

typedef struct AGENDA{
    char nombre[MAX];
    char apellido[MAX];
    char num[MAX];
    short int edad;
    tTipo tipoContacto
}tContacto;

void menu();
tContacto *aumentaAgenda(tContacto *lista, int *tamActual);
tContacto *aumentaAgenda2(tContacto *lista, int *tamActual);
void verAgenda(tContacto *lista, int numPersonas);
void aniadirContacto(tContacto *agenda, int numPersonas);
tContacto *iniciarLista(int tam);
void arreglar(char *palabra);

#endif //PRACTICA4_FUNCIONES_H
