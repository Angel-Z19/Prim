#include <stdio.h>
#include <stdbool.h>
#include "prim.h"
#include "grafo.h"


void primMST(int raiz)
{
    Vertice vertices[V];

    // Inicializacion
    for (int i = 0; i < V; i++)
    {
        vertices[i].key = INF;
        vertices[i].pi = -1;
        vertices[i].enQ = 1;
    }

    vertices[raiz].key = 0;

    // Bucle principal;

    for (int count = 0; count < V; count++)
    {
        // Extraer el minimo
        int u = extractMin(vertices); // nueva casa

        // si ya no hay nodos alcanzables
        if (u == -1) break;

        vertices[u].enQ = 0; //sacar de la cola

        // Revisar las casas vecinas

        for (int v = 0; v < V; v++)
        {
            //Si hay arista Y v esta en la cola Y el peso es menor a la llave actual
            if (grafo[u][v] != 0 && vertices[v].enQ && grafo[u][v] < vertices[v].key)
            {
                vertices[v].pi = u;
                vertices[v].key = grafo[u][v];
            }
        }
    }

    //Imprimir el resultado
    printf("Aristas del Arbol de expansión minimo:\n");
    int pesoTotal = 0;
    for (int i = 0; i < V; i++)
    {
        if (vertices[i].pi != -1){
            printf("Casa %c - Casa %c (Peso %d)\n", vertices[i].pi + 'A', i + 'A', vertices[i].key);
            pesoTotal += vertices[i].key;
        }
    }
    printf("Peso total del MST: %d\n", pesoTotal);
}




//EXTRACT MIN
int extractMin(Vertice vertices[])
{
    int min = INF;
    int min_index = -1;

    for (int v = 0; v < V; v++)
    {
        //Solo buscar en los nodos que: v.enQ == 1 (que si estan en la cola)
        if (vertices[v].enQ && vertices[v].key < min)
        {
            min = vertices[v].key;
            min_index = v;
        }
    }
    return min_index;
}


