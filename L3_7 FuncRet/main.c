#include <stdio.h>
#include <stdlib.h>

int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2);
int area (int x1, int y1, int x2, int y2);

int main()
{
    int xe1, ye1, xd1, yd1, xe2, ye2, xd2, yd2, areaT;

    scanf("%i %i %i %i", &xe1, &ye1, &xd1, &yd1);
    scanf("%i %i %i %i", &xe2, &ye2, &xd2, &yd2);

    areaT = area_total(xe1, ye1, xd1, yd1, xe2, ye2, xd2, yd2);

    printf("RESP:%i", areaT);

    return 0;
}

int area (int x1, int y1, int x2, int y2)
{
    int altura, largura;

    altura = y2 - y1;
    largura = x2 - x1;

    return altura * largura;
}
int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2)
{
    int area1, area2, area3=0, areaTot;

    area1= area(r1_x1, r1_y1, r1_x2, r1_y2);
    area2= area(r2_x1, r2_y1, r2_x2, r2_y2);

    if(r2_x1 < r2_x2 && r2_y1 < r1_y2)
    {
        area3= area(r2_x1, r2_y1, r1_x2, r1_y2);
    }
    areaTot=area1+area2-area3;
    return areaTot;
}

