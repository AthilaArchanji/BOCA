#include <stdio.h>
#include <stdlib.h>

int main(){

    int N = 0, acessosDia, diasNecessarios = 1, acessosTot = 0, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &acessosDia);

        acessosTot = acessosTot + acessosDia;

        if (acessosTot < 1000000)
        {
            diasNecessarios++;
        }
    }

    printf("%d\n", diasNecessarios);

    return 0;

}
