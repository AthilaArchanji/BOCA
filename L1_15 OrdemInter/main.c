#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n1, c, d, u;

    scanf("%i %i", &a, &n1);

    if (n1==1){
        u = a - a/10*10;
        if (u%2==0)
        {
            printf("PAR");
        }
        else
        {
            printf("IMPAR");
        }

    }if (n1==2){
        d = a/10 - a/100*10;
        if (d%2==0)
        {
            printf("PAR");
        }
        else
        {
            printf("IMPAR");
        }

    }if (n1==3){
        c = a/100;
        if (c%2==0)
        {
            printf("PAR");
        }
        else
        {
            printf("IMPAR");
        }
        }
    return 0;
}
