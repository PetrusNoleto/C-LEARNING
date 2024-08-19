#include<stdio.h>
#define PI 3.14
int main()
{
    int resultado = 95;
    char texto = "teste";
    signed char charNegativo = -140; // char com sinal
    unsigned char charpositivo = 140; // somente positivo sem sinal
    const double teste = 3.141592653589793;
    const float teste2 = 3.141592653589793;
    printf("o valor é %.10lf",teste);
}


/*
 *Palavra-chave	Tipo	Tamanho em bytes	Intervalo
 *Char	Caractere	1	-128 a 127
signed char	Caractere com sinal	1	-128 a 127
unsigned char	Caractere sem sinal	1	0 a 255
Int	Inteiro	2	-32.768 a 32.767
signedint	Inteiro com sinal	2	-32.768 a 32.767
unsignedint	Inteiro sem sinal	2	0 a 65.535
short int	Inteiro curto	2	-32.768 a 32 767
signed short int	Inteiro curto com sinal	2	-32.768 a 32.767
unsigned short int	Inteiro curto sem sinal	2	0 a 65.535
longint	Inteiro long	4	-2.147.483.648 a 2.147.483.647
signedlongint	Inteiro longo com sinal	4	-2.147.483.648 a 2.147.483.647
unsignedlongint	Inteiro longo sem sinal	4	0 a 4.294.967.295
float	Ponto flutuante com precisão simples	4	3.4 E-38 a 3.4E+38
double	Ponto flutuante com precisão simples	8	1.7 E-308 a 1.7E+308
longdouble	Ponto flutuante com precisão dupla longo	16	3.4E-4932 a 1.1E+4932
*/