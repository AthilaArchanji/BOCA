#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    scanf("%c", &letra);
    printf("RESP:");

    while(letra != '.' && letra != '!' && letra != '?')
    {
        if(letra == ' '){
            printf("_");
        }
        if(letra != ' '){
            printf("%c", letra);
        }
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
