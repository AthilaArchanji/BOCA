#include <stdio.h>
#include <stdlib.h>
#define Pi 3.141592

typedef struct{

    float base;
    float altura;
    float raio;
}tForma;

tForma LeForma();
int EhQuadrado(tForma);
int EhRetangulo(tForma Retan);
int EhCirculo(tForma Circ);

int main()
{
    int n, m, contQuadrado = 0, contRetangulo = 0, contCirculo = 0;
    float aCirc = 0, aQuad = 0, aRet = 0;
    tForma forma;

    scanf("%i", &m);

    for(n = 0; n < m; n++)
    {
        forma = LeForma();

        if(EhQuadrado(forma))
        {
            contQuadrado++;
        }
        if(EhRetangulo(forma))
        {
            contRetangulo++;
        }
        if(EhCirculo(forma))
        {
            contCirculo++;
        }
    }
    printf("Circulos: %i\n", contCirculo);
    printf("Quadrados: %i\n", contQuadrado);
    printf("Retangulos: %i", contRetangulo);

    return 0;
}
tForma LeForma()
{
    tForma formaLida;

    scanf("%f %f %f", &formaLida.base, &formaLida.altura, &formaLida.raio);

    return formaLida;
}
int EhQuadrado(tForma Quad)
{
    if(Quad.base > 0 && Quad.altura > 0 && Quad.raio <= 0)
    {
        if(Quad.base == Quad.altura)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
        return 0;
}
int EhRetangulo(tForma Retan)
{
    if(Retan.base > 0 && Retan.altura > 0 && Retan.raio <= 0)
    {
        if(Retan.base > Retan.altura || Retan.altura > Retan.base)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
        return 0;
}
int EhCirculo(tForma Circ)
{
    if(Circ.base <= 0 && Circ.altura <= 0 && Circ.raio > 0)
    {
        return 1;
    }
    else
        return 0;
}
