#include <stdio.h>
#include <stdlib.h>

float velocidade (float p, float t);
int indice_olimpico(float velocidade);

int main()
{
    int a, b , c, atletas, identAtle,p, aprovados = 0, perApro;
    float tempAtleA,tempAtleB,tempAtleC, resultA,resultB,resultC;

    scanf("%i %i %i", &a, &b, &c);
    scanf("%i", &atletas);

    for(p = 1; p <= atletas; p++)
    {
        scanf("%i %f %f %f", &identAtle, &tempAtleB, &tempAtleB, tempAtleC);
        resultA = velocidade(a, tempAtleA);
        resultB = velocidade(b, tempAtleB);
        resultC = velocidade(c, tempAtleC);

        if(indice_olimpico(resultA) == 1 && indice_olimpico(resultB) == 1 && indice_olimpico(resultC) == 1)
        {
            aprovados++;
        }
    }
    perApro = aprovados * 100;
    perApro = aprovados/ atletas;
    printf("Percentual de atletas credenciados: %.2f", perApro);

    return 0;
}
float velocidade (float p, float t)
{
    float v;
    v = p/t;
    return v;
}
int indice_olimpico(float velocidade)
{
    if(velocidade >= 20)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    char prova_mais_dificil(int a, int b, int c)
    {

    }
