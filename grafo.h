#ifndef GRAFO_H
#define GRAFO_H

#define V 20
#define INF 999999

enum Casas {
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T
};

typedef struct {
    int key; // llave o peso
    int pi; // padre 
    int enQ; // para saber si el nodo sigue en la cola Q
} Vertice;

extern int grafo[V][V];

void inicializarGrafo();
void agregarArista(int origen, int destino, int peso);
void cargarGrafo();  // ESTA es clave

#endif