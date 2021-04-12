#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xa,ya,xb,yb, XZ, YZ;

    scanf("%i %i %i %i %i %i", &xa, &ya, &xb, &yb, &XZ, &YZ);

    if ((XZ >= xa) && (XZ <= xb) && (YZ >= ya) && (YZ <= yb)){
        printf("DENTRO");

    }else if ((XZ >= xa) && (XZ <= xb) && (YZ <= ya) && (YZ >= yb)){
        printf("DENTRO");

    }else if ((XZ <= xa) && (XZ >= xb) && (YZ <= ya) && (YZ >= yb)){
        printf("DENTRO");

    }else if ((XZ <= xa) && (XZ >= xb) && (YZ >= ya) && (YZ <= yb)){
        printf("DENTRO");

    }else
        printf("FORA");

    return 0;
}
