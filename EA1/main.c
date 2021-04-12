#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    double N,i, soma=0;

    scanf("%i", &num);

    switch(num)
    {
    case 1:
        N = 1;
        i = 1;

        while(N<=99 && i<=50)
        {
            soma+=N/i;
            N+=2;
            i++;
        }
        printf("%.6f", soma);

        break;

    case 2:

        N=1;
        i=50;

        while(N<=50 &&i>=1)
        {
            soma+=pow(2,N)/i;
            N++;
            i--;
        }
        printf("%.6f", soma);

        break;

    case 3:
        N=1;
        i=1;

        while(N<=10 && i<=100)
        {
            soma+=N/i;
            N++;
            i=pow(N,2);
        }

        printf("%.6f", soma);

        break;
    }

    return 0;
}
