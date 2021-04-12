#include <stdio.h>
#include <stdlib.h>

char ehMinuscula (char letra);
char ehMaiscula (char letra);

int main()
{
    char letra;
    int TotB = 0, numB = 0;

    while((letra = getchar()) != '.')
    {
        numB = 0;
        while(ehMaiscula(letra) == 1||ehMinuscula(letra) == 1)
        {
            numB++;
            letra = getchar();
        }
        if(numB>0)
        {
            printf("%i ", numB);
            TotB++;
        }
        if(letra =='.') break;
    }
    printf("\nNumero total de blocos de letras: %i ", TotB);
    return 0;
}

char ehMaiscula (char letra)
{
    if (letra >= 'A' && letra <= 'Z')
    {
        return 1;
    }

}
char ehMinuscula (char letra)
{
    if (letra >= 'a' && letra <= 'z')
    {
        return 1;
    }
}
