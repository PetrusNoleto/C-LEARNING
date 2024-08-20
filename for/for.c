#include<stdio.h>

int main (){
    const char* camisas[] = {"lacoste","nike","adidas"};
    const int tamanho = sizeof(camisas) / sizeof(camisas[0]);
    for (int i = 0; i < tamanho; i++) {
        printf("valor %s\n",camisas[i]);
    }
    return 0;
}