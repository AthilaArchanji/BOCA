#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int cod;
    float valor;
    int quantidade;
}tProduto;

tProduto LeProduto();
int EhProduto1MaiorQ2(tProduto p1, tProduto p2);
int EhProduto1MenorQ2(tProduto p1, tProduto p2);
int TemProdutoEmEstoque(tProduto p);
void ImprimeProduto(tProduto p);

int main()
{
    int n, i;
    tProduto menor, maior, produto, atual;

    scanf("%i", &n);

    for(i = 0; i < n; i++)
    {
        atual = LeProduto();

        if(i==0)
        {
            maior = atual;
            menor = atual;
        }
        if(TemProdutoEmEstoque(atual))
        {
            if(EhProduto1MaiorQ2(maior, atual))
            {
                maior = atual;
            }
            if(EhProduto1MenorQ2(menor, atual))
            {
                menor = atual;
            }
        }
        else
        {
            printf("FALTA:");
            ImprimeProduto(atual);

            if(EhProduto1MaiorQ2(maior, atual))
            {
                maior = atual;
            }
            if(EhProduto1MenorQ2(menor, atual))
            {
                menor = atual;
            }
        }
    }
    printf("MAIOR:");
    ImprimeProduto(maior);

    printf("MENOR:");
    ImprimeProduto(menor);

    return 0;
}
tProduto LeProduto()
{
    tProduto produto;

    scanf("%i;%f;%i", &produto.cod, &produto.valor, &produto.quantidade);

    return produto;
}
int EhProduto1MaiorQ2(tProduto p1, tProduto p2)
{
    if(p2.valor > p1.valor)
        return 1;
    else
        return 0;
}
int EhProduto1MenorQ2(tProduto p1, tProduto p2)
{
    if(p1.valor > p2.valor)
        return 1;
    else
        return 0;
}
int TemProdutoEmEstoque(tProduto p)
{
    return p.quantidade;
}
void ImprimeProduto(tProduto p)
{
    printf("COD %i, PRE %.2f, QTD %i\n", p.cod, p.valor, p.quantidade);
}
