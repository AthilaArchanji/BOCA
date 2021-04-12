#include <stdio.h>
#include <stdlib.h>

int EhPrimo(int num);
void ImprimeMultiplos(int num, int max);

int main()
{
    int n, m;

    scanf("%i %i", &n, &m);

    for(n+=1; n < m; n++)
    {
        if(EhPrimo(n))
        {
            printf("%i\n", n);
            ImprimeMultiplos(n, m);
        }
    }
    return 0;
}
int EhPrimo(int num)
{

    int i, c = 0;

    for(i=1; i <= num; i++)
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
void ImprimeMultiplos(int num, int max){
    int n=num, i=0;

    for(num++; num<max; num++)
    {
        if(num%n==0)
        {
            printf("%d ", num);
            i++;
        }
    }
    if(i==0)
    {
        printf("*");
    }
    printf("\n");
}
