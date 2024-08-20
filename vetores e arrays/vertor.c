#include <stdio.h>

int main() {
    // Declaração e inicialização de um vetor de inteiros
    int numeros[5] = {10, 20, 30, 40, 50};

    // Acessando e imprimindo os elementos do vetor
    for (int i = 0; i < 5; i++) {
        printf("Elemento na posição %d: %d\n", i, numeros[i]);
    }

    return 0;
}