#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef GRAFO_H
#include "grafo.h"
#define GRAFO_H
#endif

#ifndef COLA_H
#include "cola.h"
#define COLA_H
#endif

#ifndef LISTA_H
#include "lista.h"
#define LISTA_H
#endif

#define CAPACIDAD 10

typedef  struct tipo_lista{
    int ultimo;
    int capacidad;
    int *elementos;
} Lista;


Lista *creaLista(){
    Lista *tmp;
    tmp = (Lista*) malloc(sizeof(Lista));
    tmp->ultimo = -1;
    tmp->capacidad = CAPACIDAD;
    tmp->elementos = malloc(tmp->capacidad*sizeof(int));
    return (tmp);
}

Lista *creaListaCapacidad(int unaCapacidad){
    Lista *tmp;
    tmp = (Lista*)malloc(sizeof(Lista));
    tmp->ultimo = -1;
    tmp->capacidad = unaCapacidad;
    tmp->elementos = malloc(tmp->capacidad*sizeof(int));
    return (tmp);
}

int insertaenLista(Lista *lista, int valor, int posicion){
    if(((lista->ultimo + 1) == lista->capacidad) //arreglo lleno
       || (posicion > lista->ultimo+1)
       || (posicion < 0))
        return(-1); //error
    for(int i =lista->ultimo; i>= posicion; i--){
        lista->elementos[i+1] = lista->elementos[i];
    }
    lista->elementos[posicion] = valor;
    lista->ultimo ++;
    return(0);
}
