#include <stdio.h>
#include <stdlib.h>


int main(){

    int qntApertos, aperto, estadoInterruptorUm = 0, estadoInterruptorDois = 0, i = 0;

    scanf("%d", &qntApertos);

    for (i = 1; i <= qntApertos; i++){

        scanf("%d", &aperto);

        if (aperto == 1 && estadoInterruptorUm == 0){

            estadoInterruptorUm = 1;

        } else if (aperto == 1 && estadoInterruptorUm == 1){

            estadoInterruptorUm = 0;

        } else if (aperto == 2 && estadoInterruptorUm == 0 && estadoInterruptorDois == 0){

            estadoInterruptorUm = 1;

            estadoInterruptorDois = 1;

        } else if (aperto == 2 && estadoInterruptorUm == 1 &&  estadoInterruptorDois == 0){

            estadoInterruptorUm = 0;

            estadoInterruptorDois = 1;

        } else if (aperto == 2 && estadoInterruptorUm == 0 && estadoInterruptorDois == 1){

            estadoInterruptorUm = 1;

            estadoInterruptorDois = 0;

        } else if (aperto == 2 && estadoInterruptorUm == 1 && estadoInterruptorDois == 1){

            estadoInterruptorUm = 0;

            estadoInterruptorDois = 0;

        }
    }

    printf("%d\n", estadoInterruptorUm);

    printf("%d\n", estadoInterruptorDois);

    return 0;
}
