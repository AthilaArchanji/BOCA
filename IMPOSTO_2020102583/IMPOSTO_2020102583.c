#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codEstado;
    float preProd, preFinal;

    scanf("%i %f", &codEstado, &preProd);

    if(codEstado!=27 && codEstado!=31 && codEstado != 15 && codEstado != 77)
        printf("Estado nao reconhecido.");

    switch(codEstado)
    {
        case 27:
            preFinal = (preProd*0.07) + preProd;
            printf("%.2f", preFinal);
            break;

        case 31:
            preFinal = (preProd*0.12) + preProd;
            printf("%.2f", preFinal);
            break;

        case 15:
            preFinal = (preProd*0.15) + preProd;
            printf("%.2f", preFinal);
            break;

        case 77:
            preFinal = (preProd*0.16) + preProd;
            printf("%.2f", preFinal);
            break;
    }


    return 0;
}
