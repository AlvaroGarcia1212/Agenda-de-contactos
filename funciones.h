//
// Created by Álvaro on 14/04/2023.
//

#ifndef PRACTICA4_FUNCIONES_H
#define PRACTICA4_FUNCIONES_H
#define MAX 250

typedef enum CONTACTO{
    FAVORTO, CONOCIDO, TRABAJO
}tContacto;

typedef struct AGENDA{
    char nombre[MAX];
    char apellido[MAX];
    char num[MAX];
    tContacto tipoContacto
}tAgenda;

void menu();


#endif //PRACTICA4_FUNCIONES_H
