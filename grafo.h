#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif


typedef struct t_grafo{
	char padre, etiqueta, color;
	int distancia;
	struct t_grafo *vecino;
} Grafo;

grafo inicia_grafo(){
	grafo *aux;
	aux=(grafo*)malloc(sizeof(grafo));
	aux->padre=
	aux->color=
	aux->distancia=-1;
	aux->etiqueta=
	aux->vecino=NULL;
	return(aux);
}



