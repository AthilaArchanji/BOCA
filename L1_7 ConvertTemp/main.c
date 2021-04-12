#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp, Fc, Cf;
    char g;

    scanf("%f %c", &temp, &g);

    if ((g =='f')||(g =='F'))
    {
        Fc = (temp - 32)/1.8;
            printf("%.2f (C)", Fc);
    }
    else
    {
        if((g == 'c')||(g == 'C'))
        {
            Cf = (temp*1.8)+32;
            printf("%.2f (F)", Cf);
        }
    }

    return 0;
}
