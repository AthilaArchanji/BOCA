#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, con = 0;

    scanf("%i", &num);

    for(i = 1;i <= num; i++)
    {
        if(num%i==0)
        {
            con++;
        }
    }
    if (con==2)
    {
        printf("Primo");
    }
        else
        {
            printf("Nao primo");
        }
    return 0;
}
