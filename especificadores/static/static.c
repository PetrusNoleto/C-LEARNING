#include<stdio.h>

static int numero12 = 14;



int show_name() {

    printf("o numero é %d  \n",numero12);

    return 0;
}

int main () {
    show_name();
    static int numero1 = 12;
    printf("o numero é %d",numero1);
    return  0;
}


