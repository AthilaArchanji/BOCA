#include <stdio.h>
#include <stdlib.h>

int main()
{
    //comentario teste para github desktop
    int num;

    scanf("%i", &num);

    if((num>12)||(num<1))
    {
        printf("Invalido.");
    }
    else if(num==1)
    {
        printf("Jan.");
    }
    else if(num==2)
    {
        printf("Fev.");
    }
    else if(num==3)
    {
        printf("Mar.");
    }
    else if(num==4)
    {
        printf("Abr.");
    }
    else if(num==5)
    {
        printf("Mai.");
    }
    else if(num==6)
    {
        printf("Jun.");
    }
    else if(num==7)
    {
        printf("Jul.");
    }
    else if(num==8)
    {
        printf("Ago.");
    }
    else if(num==9)
    {
        printf("Set.");
    }
    else if(num==10)
    {
        printf("Out.");
    }
    else if(num==11)
    {
        printf("Nov.");
    }
    else if(num==12)
    {
        printf("Dez.");
    }

    return 0;
}
