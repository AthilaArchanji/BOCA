#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1,p2,c1,c2;

    scanf("%i %i %i %i", &p1, &c1, &p2, &c2);

    if(p1*c1 == p2*c2)
    {
        printf("0");
    }
    else if(p1*c1 < p2*c2)
    {
        printf("1");
    }
    else if(p1*c1 > p2*c2)
    {
        printf("-1");
    }
    return 0;
}
