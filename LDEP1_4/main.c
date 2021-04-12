#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, m, cont;

	scanf("%i", &m);

	for(n = 1; n<=m; n++)
    {
        cont = 0;

        for(i = 1; i<=n; i++)
        {
            if(n%i==0)
            {
                cont++;
            }
        }
        if (cont==2)
        {
            printf("%i ", n);
        }
    }
	return 0;
}
