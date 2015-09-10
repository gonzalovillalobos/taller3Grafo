#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef COLA_H
#include "cola.h"
#define COLA_H
#endif

typedef struct t_nodo{
	char etiqueta, color;
	int distancia;
	struct t_nodo *vecino;
} nodo;




