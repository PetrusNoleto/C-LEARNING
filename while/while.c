#include<stdio.h>

int main (){
    int number = 0;

    while(number < 12) {
        int newNumber = number++;
        printf("novo numero %d\n",newNumber);
   }
    return 0;
}