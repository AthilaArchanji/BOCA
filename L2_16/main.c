#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menor, num, i = 0, p = 0, posicao = 0, primeiro, ultimo;

    while(scanf("%d ", &num)){
        if(i==0){
            menor = num;
            i++;
        }
        if(num<menor){
            menor = num;
        }
    }

    scanf("%*c");
    i=0;

    while(scanf("%d ", &num)){
        if(num == menor && i==0){
            primeiro=posicao;
            i++;
        }

        if(num == menor){
            ultimo=posicao;
            p++;
        }

        if(i==0){
            primeiro=posicao+1;
            ultimo=posicao+1;
        }

        if(i==1 && p==0){
            ultimo=primeiro;
        }
        posicao++;
    }

    printf("%i %i %i", menor, primeiro, ultimo);

    return 0;
}
