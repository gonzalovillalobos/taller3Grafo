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

typedef struct tcola{
	int tam;
	nodo *primero, *ultimo;
} cola;

cola inicia_cola(){
	cola *aux=(cola *)malloc(sizeof(cola));
	aux->tam=0;
	aux->primero=NULL;
	aux->ultimo=NULL;
	return(aux);
}

int esvaciacola(cola *col){
	return(col->tam==0);
}

int encole(cola *col, ){

}

int decole(cola *col){
	if(esvaciacola(col)){
		return(1);
	}
	
}






