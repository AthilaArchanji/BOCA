#include <stdio.h>
#include <stdlib.h>

int main(void){

	int qntCasos, i = 0, termo;

    scanf("%d", &qntCasos);

    for(i = 0; i < qntCasos; i++){

        scanf("%d", &termo);

        if((termo % 2) == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");

        }
    }
}
