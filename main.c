#include<stdio.h>
int main()
{
   printf("ola mundo \n teste");
   return 0;
}


/* gerar um arquivo .i -E main.c -o teste.i  */
/*gerar um arquivo assembler  gcc -S teste.i -o teste.s */
/*gerar um arquivo objeto (.o) ou (.obj ) gcc -c teste.s -o teste.o ou gcc -c teste.s -o teste.obj */
/*gerar um arquivo executável a partir de um arquivo objeto (.o ou .obj)  gcc teste.o -o teste ou gcc teste.obj -o teste */