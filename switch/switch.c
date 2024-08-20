#include<stdio.h>

int main(){
    int number =  8;

    switch (number) {
        case 8:
            printf("fernanda");
        break;
        case 12:
            printf("message: %c\n",number);
        break;
        default:
            printf("nenhum valor");
    }
    return 0;
}