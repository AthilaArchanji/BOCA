#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a,b;
    float soma;

    scanf("%i %i", &a, &b);

    soma = sqrt(a) +  sqrt(b);

    printf("%.2f", soma);
    return 0;
}
