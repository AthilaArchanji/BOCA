/*
*Peganum.c
*criado em: 02/04/20
*Autor: Athila Archanji
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num,REAl;
    int INTEIRO;

    scanf("%f", &num);

    INTEIRO = num;
    REAl = num - INTEIRO;

    printf("INTEIRO:%i,REAL:%.2f", INTEIRO, REAl);

    return 0;
}
