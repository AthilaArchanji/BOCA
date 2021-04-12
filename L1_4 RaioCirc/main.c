/*
*Areacirc_2.0.c
*Criado em: 26/03/21
*Autor: Athila Archanji
*/
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
#include <math.h>

int main()
{
    float r, area, area2, r2;

    scanf("%f", &r);
    area = r*r*pi;
    area2 = area/2;
    r2 = sqrt(area2/pi);

    printf("%.2f %.2f", area, r2);
    return 0;
}

