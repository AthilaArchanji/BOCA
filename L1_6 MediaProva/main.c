#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1, p2, media;

    scanf("%f %f", &p1, &p2);
    media = (p1+p2)/2;

    if(media < 5)
    {
        printf("%.1f - Reprovado", media);
    }
    if(media>=7)
    {
        printf("%.1f - Aprovado", media);
    }
    if ((media>=5)&&(media<7))
    {
        printf("%.1f - De Recuperacao", media);
    }
    return 0;
}
