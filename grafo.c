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
    agregarArista(A, D, 30);

    agregarArista(B, C, 100);
    agregarArista(B, E, 40);
    agregarArista(B, F, 45);
    agregarArista(B, G, 70);

    agregarArista(C, H, 60);
    agregarArista(C, G, 55);

    agregarArista(D, P, 50);

    agregarArista(E, I, 10);

    agregarArista(F, J, 55);

    agregarArista(G, K, 15);
    agregarArista(G, L, 20);

    agregarArista(H, O, 70);
    agregarArista(H, N, 85);
    agregarArista(H, L, 40);

    agregarArista(I, J, 60);
    agregarArista(I, P, 90);

    agregarArista(J, K, 80);
    agregarArista(J, Q, 45);

    agregarArista(K, M, 60);

    agregarArista(L, M, 50);

    agregarArista(M, S, 2);

    agregarArista(N, O, 120);
    agregarArista(N, O, 105);
    agregarArista(N, T, 60);
    agregarArista(N, S, 55);

    agregarArista(O, T, 105);

    agregarArista(P, R, 205);

    agregarArista(Q, R, 5);

    agregarArista(R, T, 230);

    agregarArista(S, T, 25);
}