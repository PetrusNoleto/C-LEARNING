#include <stdio.h>
#include "./extern/CONTADOR.h"

extern int contador;
void incrementar();

int main() {
    printf("Valor antes da incrementação: %d\n", contador);
    incrementar();
    printf("Valor incrementado: %d\n", contador);
    return 0;
}