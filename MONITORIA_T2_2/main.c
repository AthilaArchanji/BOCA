#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, num, i,m2=0,m3=0,m4=0,m5=0;

    scanf("%d", &N);


    for (i = 0; i < N; i++)
    {
        scanf("%d", &num);

        if (num%2==0)
        {
            m2++;
        }
        if (num%3==0)
        {
            m3++;
        }
        if (num%4==0)
        {
            m4++;
        }
        if (num%5==0)
        {
            m5++;
        }
    }

    printf("%i Multiplo (s) de 2\n", m2);
    printf("%i Multiplo (s) de 3\n", m3);
    printf("%i Multiplo (s) de 4\n", m4);
    printf("%i Multiplo (s) de 5\n", m5);


    return 0;

}
