#include <stdio.h>
#include <stdlib.h>

int verificaPrimo(int n);
int transformaPrimo(int n);
int verificaNegativo(int n);

int main() {

    int linha, coluna, numero, primo, negativo, i,p;

    scanf("%d%d", &linha, &coluna);

    for(i=1; i<=linha; i++)
        {
            for(p=1; p<=coluna; p++)
            {
                scanf("%d", &numero);

                negativo= verificaNegativo(numero);
                if(negativo==1)
                {
                    numero=numero*(-1);

                    if(verificaPrimo(numero)==1)
                    {
                        numero=(numero*(-1));
                        printf("%d ", numero);
                    }
                    else
                        {
                            primo= transformaPrimo(numero);
                            primo= (primo*(-1));
                                if(primo<-32000)
                                    {
                                        numero=numero*(-1);
                                        printf("%d ", numero);
                                    }
                                        else
                                            {
                                                printf("%d ", primo);
                                            }
                        }
                }
            else
            {
                if(verificaPrimo(numero)==1)
                {
                    printf("%d ", numero);
                }
                else
                {
                    primo= transformaPrimo(numero);
                    if(primo>32000)
                    {
                        printf("%d ", numero);
                    }
                    else
                    {
                        printf("%d ", primo);
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}

int verificaPrimo(int n)
{
    int c = 0, i = 1;

    for(i = 1; i <= n; i++)
    {
        if(n%i==0)
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
int transformaPrimo(int n)
{
    int i, p=0;
    while(p != 2)
    {
        n++;
        p=0;
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                p++;
            }
        }
    }
    return n;
}
int verificaNegativo(int n)
{
    if(n<0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
