#include <stdio.h>
#include <stdlib.h>

int EhPalindromo(int num);

int main()
{
    int num;

    while(scanf("%i", &num)==1)
    {
        if(EhPalindromo(num)==1)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }


    return 0;
}
int EhPalindromo(int num)
{
    int numOrig = num, palin = 0, r;

    while(num!=0)
    {
        r = num%10;
        palin = palin + r;
        num = num/10;

        if(num!=0)
        {
            palin = palin*10;
        }
    }
    if(palin==numOrig)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
