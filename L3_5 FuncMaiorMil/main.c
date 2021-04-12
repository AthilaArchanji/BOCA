#include <stdio.h>
#include <stdlib.h>

int Propriedade(int num);

int main()
{
    int n, m;

    scanf("%i %i", &n, &m);

    for(n+=1; n < m; n++)
    {
        if(Propriedade(n))
            {
                printf("%i\n", n);
            }
    }

    return 0;
}

int Propriedade(int num)
{
    int ab, cd, ef;

    ab = num/100;
    cd = num%100;
    ef = ab + cd;

    if(ef*ef==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
