#include <stdio.h>

int main() {
    // Declaração e inicialização de uma matriz 3x3 de inteiros
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Acessando e imprimindo os elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento na posição [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
