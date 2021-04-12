#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1, QuantNum = 1, maior = 0;
    float soma = 0;

    scanf("%i", &num);

    while(num!=0)
    {
        if(num>maior)
        {
            maior = num;
        }
        soma += num;

        printf("%i %.6f\n", maior, soma/QuantNum);
        QuantNum++;
        scanf("%i", &num);
    }
    return 0;
}
