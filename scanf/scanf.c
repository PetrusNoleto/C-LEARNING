#include<stdio.h>

int main() {
    int entrada;
    int valor_entrada;

    printf("Digite um numero: ");
    valor_entrada = scanf("%d", &entrada);

    // Verifica se a leitura foi bem-sucedida
    if (valor_entrada == 1) {
        printf("Voce digitou o numero: %d\n", entrada);
    } else {
        printf("Entrada inválida. Por favor, digite um número inteiro.\n");
        // Limpa o buffer de entrada
        while (getchar() != '\n');
    }

    return 0;
}

