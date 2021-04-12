#include <stdio.h>
#include <stdlib.h>

char ehMinuscula (char letra);
char ehMaiscula (char letra);

int main()
{
    char letra;
    int numLetras = 0, numB = 0;

    scanf("%c", &letra);

    while((letra = getchar()) != '.')
    {
        numLetras = 0;
        while (ehMaiscula(letra) == 1||ehMinuscula(letra) == 1)
        {
            numLetras++;
            letra = getchar();
        }
        if(numLetras>0)
        {
            printf("%i ", numLetras);
            numB++;
        }
        if (letra == '.') break;
    }
    printf("\nNumero total de blocos de letras: %i ", numB);
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

