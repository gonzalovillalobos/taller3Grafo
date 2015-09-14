#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

typedef  struct tipo_cola{
    int tamano;
	Grafo *inicio, *fin;
} Cola;
 
                                
Cola *iniciacola(){
    Cola *aux;
    aux = (Cola*)malloc(sizeof(Cola));
    aux->tamano = 0;
    aux->inicio = NULL;
    aux->fin = NULL;
    return (aux);
}

int esVaciaCola(Cola *cola){
    // Asume que cola fue inicializada
    // Si no se lleva registro del tamaño la cola, está vacía cuando
    // cola->inicio == NULL
    return(!cola->tamano);
}

int llegada(Cola *cola, int valor){
     // Agrega un nuevo elemento a continuacion del elemento apuntado por fin
     Grafo *nuevo;
     nuevo = (Grafo*)malloc(sizeof(Grafo));
     if(nuevo == NULL) return(-1); //error: no hay memoria disponible
     nuevo-> = ;
     nuevo->sgte = NULL;    
     
     if(esVaciaCola(cola)){
                        cola->inicio=nuevo;
                        cola->fin=nuevo;
     }else{
           cola->fin->sgte = nuevo;
           cola->fin = nuevo;
     }
     cola->tamano++;
     return(1);
}
     
int atencion(Cola *cola){
     // Elimina el elemento apuntado por inico, retorna su dato.
    //OJO: código de error no tiene sentido si -1 es un valor válido en la cola.
     if(esVaciaCola(cola)) return (-1);
     nodo *aux1;
     int valor;
     temp = cola->inicio;
     cola->inicio = cola->inicio->sgte;
     valor = temp->dato;
     free(temp);
     cola->tamano--;
     return(valor);     
}
     
void vaciaCola(Cola *cola){
     //asume que la cola ha sido inicializada
     while(!esVaciaCola(cola))
         atencion(cola);
}

void eliminaCola(Cola *cola){
    vaciaCola(cola);
    free(cola);
}
