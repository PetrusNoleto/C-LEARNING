#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int) * 5); // Alocando memória para 5 inteiros

    if (ptr == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1; // Inicializando o array
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // Imprimindo os valores
    }

    free(ptr); // Liberando a memória alocada
    return 0;
}

