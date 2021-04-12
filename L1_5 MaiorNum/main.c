#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    scanf("%i %i", &num1, &num2);

    if(num1==num2)
    {
        printf("N1 = N2");
    }
    else if (num1>num2)
    {
        printf("N1 = %i", num1);
    }
    else
    {
        printf("N2 = %i", num2);
    }

    return 0;
}
