#include <stdio.h>
#include "grafo.h"
#include "prim.h"


int main(void)
{   
    inicializarGrafo();
    cargarGrafo();

    primMST(A);

    return 0;
}   