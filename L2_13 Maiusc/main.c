#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    scanf("%c", &letra);

    while(letra != '.' && letra != '!' && letra != '?')
    {
        if(letra >= 'a' && letra <= 'z')
        {
            letra = letra - 32;
        }
        printf("%c", letra);

        scanf("%c", &letra);
    }
    if(letra == '.'){
        printf(".");
     }
    if(letra == '!'){
        printf("!");
     }
    if(letra == '?'){
        printf("?");
     }
    return 0;
}
