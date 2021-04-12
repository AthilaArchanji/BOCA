#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, positivo = 0, negativo = 0, somaPositivo = 0, somaNegativo = 0;
    char caracter;

    caracter=' ';

    while(caracter == ' ' || caracter == '\n'){
        caracter= '\0';
        scanf("%i", &numero);
        scanf("%c", &caracter);

        if(numero > 0){
            positivo++;
            somaPositivo= somaPositivo+numero;
        }
        if(numero <0){
            negativo++;
            somaNegativo= somaNegativo + numero;
        }

    }
    printf("%i %i %i %i", negativo, positivo, somaNegativo, somaPositivo);
    return 0;
}
