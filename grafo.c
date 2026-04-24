#include "grafo.h"

int grafo[V][V];

void inicializarGrafo() {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            grafo[i][j] = 0;
        }
    }
}

void agregarArista(int origen, int destino, int peso) {
    grafo[origen][destino] = peso;
    grafo[destino][origen] = peso;
}

void cargarGrafo() {
    agregarArista(A, B, 100);
    agregarArista(A, D, 85);
    agregarArista(A, E, 30);

    agregarArista(B, C, 70);
    agregarArista(B, E, 40);
    agregarArista(B, F, 45);

    agregarArista(C, H, 60);
    agregarArista(C, G, 55);

    agregarArista(D, P, 50);
    agregarArista(D, I, 90);

    agregarArista(E, I, 10);

    agregarArista(F, J, 55);

    agregarArista(G, K, 15);
    agregarArista(G, L, 20);

    agregarArista(H, O, 70);
    agregarArista(H, N, 85);
    agregarArista(H, L, 40);

    agregarArista(I, J, 60);
    agregarArista(I, Q, 60);

    agregarArista(J, K, 80);
    agregarArista(J, R, 45);

    agregarArista(K, M, 60);

    agregarArista(L, N, 50);

    agregarArista(M, S, 2);
    agregarArista(M, T, 25);

    agregarArista(N, O, 120);
    agregarArista(N, T, 55);

    agregarArista(O, T, 105);

    agregarArista(P, Q, 205);

    agregarArista(Q, R, 5);

    agregarArista(R, T, 230);

    agregarArista(S, T, 25);
}