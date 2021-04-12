#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, num ,QuantPares , QuantImpar, i, p, maior, menor;
    float soma;

    QuantPares = 0;
    QuantImpar = 0;
    N = 0;
    num = 0;
    p = 0;
    soma = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d", &num);

        if (p==0)
        {
            maior = num;
            menor = num;
            p++;
        }
        if(num<=menor)
        {
			menor=num;
		}
		if(num>=maior)
		{
			maior=num;
		}
        if (num%2==0)
        {
            QuantPares++;
        }
        else if (num%2!=0)
        {
            QuantImpar++;
        }
        soma = soma + num;
    }

    printf("%i %i %i %i %.6f", maior, menor, QuantPares, QuantImpar, soma/N);

    return 0;

}
