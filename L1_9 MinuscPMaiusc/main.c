#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char letra;
    scanf("%c", &letra);

    if((letra >= 'a')&&(letra <= 'z'))
    {
        printf("%c(%i)", letra-32, letra-32);

    }else
    {
        if ((letra>='A')&&(letra<='Z'))
            {
                printf("A letra deve ser minuscula!", letra);
            }
            else
            {
                printf("Nao e letra!", letra);
            }
    }
    return 0;
}
