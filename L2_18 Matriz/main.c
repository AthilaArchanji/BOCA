#include <stdio.h>
#include <stdlib.h>

int main(){
    int coluna, linha, num, i, p,j,posiLinha, posiColuna, maior;

    scanf("%i %i", &linha, &coluna);
    j=0;

    for(i=0; i<linha; i++)
    {
        for(p=0; p<coluna; p++)
        {
            scanf("%d", &num);
            if(j==0)
            {
                maior=num;
                j++;
            }
            if(num>=maior)
            {
                maior=num;
                posiLinha=i+1;
                posiColuna=p+1;
            }
        }
    }
    printf("%i (%i, %i)", maior, posiLinha, posiColuna);

    return 0;
}

