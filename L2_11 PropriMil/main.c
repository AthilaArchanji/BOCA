#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, ab, cd, ef;

    scanf("%i %i", &n, &m);

    for(n+=1; n < m; n++)
    {
        ab = n/100;
        cd = n%100;
        ef = ab+ cd;

        if(ef*ef == n)
        {
            printf("%i\n", n);
        }
    }
    return 0;
}
