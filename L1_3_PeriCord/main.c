#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, x2, y2, largura, altura, peri;

    scanf("%f %f %f %f",&x1, &y1, &x2, &y2);

    largura = 2*(x2 - x1);
    altura = 2*(y2 - y1);
    peri = altura + largura;

    printf("%.2f", peri);
    return 0;
}
