#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, itens, itens2;
    scanf("%i" "%i", &p, &itens);
    //se o número de pessoa for igual ou maior ao numero de itens, a ultima pessoa a receber o item será o numero de itens
    if (p >= itens)
        printf("RESP:%d", itens);
    //se o numero de itens for superior ao de pessoas
    else{
        //se o numero de itens for divisível pelo de pessoas
        if (itens % p == 0)
            printf("RESP:%d", p);
        else
        {
            itens2 = itens % p;
            printf("RESP:%d", itens2);
        }
    }

    return 0;
}
