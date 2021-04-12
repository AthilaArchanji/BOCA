#include <stdio.h>
#include <stdlib.h>

int EhPrimo(int num);

int main()
{
    int n,m;

    scanf("%i %i", &n, &m);

    for(n+=1; n < m; n++)
    {
        if(EhPrimo(n))
        {
            printf("%i ", n);
        }
    }
    return 0;
}
int EhPrimo(int num)
{
    int i = 1, c = 0;

    for(i = 1; i <= num; i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
