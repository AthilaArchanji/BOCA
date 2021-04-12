#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, num;

    scanf("%i %i",&n,&m);

    for(num = n+1; num<m;num++)
    {
        if(num%3==0||num%4==0||num%7==0)
        {
            printf("%i ", num);
        }
    }
    return 0;
}
