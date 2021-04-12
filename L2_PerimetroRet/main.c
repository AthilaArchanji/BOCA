#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, largura, peri;

    scanf("%f %f", &altura, &largura);

    peri =  2*altura + 2*largura;

    printf("%.2f",peri);
    return 0;
}
