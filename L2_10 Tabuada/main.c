#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i;

    scanf("%i %i", &n, &m);

    for (n ; n <= m;n++)
    {
        i = 1;
        while(i<=10)
        {
            printf("%i x %i = %i\n", n, i, n*i);
            i++;
        }
    }
    return 0;
}
