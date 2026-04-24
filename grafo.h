#ifndef GRAFO_H
#define GRAFO_H

#define V 20
#define INF 999999

enum Casas {
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T
};

extern int grafo[V][V];

void inicializarGrafo();
void agregarArista(int origen, int destino, int peso);
void cargarGrafo();  // ESTA es clave

#endif