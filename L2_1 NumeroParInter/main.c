#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, num;

    scanf("%i %i", &n, &m);

    printf("RESP:");
    for(num = n+1; num<m; num++)
    {
        if(num%2==0)
        {
            printf("%i ", num);
        }
    }
    return 0;
}
