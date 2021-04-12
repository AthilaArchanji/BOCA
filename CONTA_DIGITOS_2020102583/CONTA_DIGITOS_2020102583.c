#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totNum = 0, tot0 = 0, tot1 = 0, tot2 = 0, tot3 = 0, tot4 = 0, tot5 = 0, tot6 = 0, tot7 = 0, tot8 = 0, tot9 = 0;
    float p0 = 0,p1 =0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0;
    char letra;

    scanf("%c", &letra);

    while(letra != '.')
    {
        switch(letra >= '0' && letra <= '9')
        {
            case 1:
                totNum++;
                break;
        }
        if(letra=='0')
        {
            tot0++;
        }
        if(letra=='1')
        {
                tot1++;
        }
        if(letra=='2')
        {
                tot2++;
        }
        if(letra=='3')
        {
                tot3++;
        }
        if(letra=='4')
        {
                tot4++;
        }
        if(letra=='5')
        {
                tot5++;
        }
        if(letra=='6')
        {
                tot6++;
        }
        if(letra=='7')
        {
                tot7++;
        }
        if(letra=='8')
        {
                tot8++;
        }
        if(letra=='9')
        {
                tot9++;
        }

       scanf("%c", &letra);
    }
    p0 = (tot0 * 100);
    p0 = p0/totNum;
    p1 = (tot1 * 100);
    p1 = p1/totNum;
    p2 = (tot2 * 100);
    p2 = p2/totNum;
    p3 = (tot3 * 100);
    p3 = p3/totNum;
    p4 = (tot4 * 100);
    p4 = p4/totNum;
    p5 = (tot5 * 100);
    p5 = p5/totNum;
    p6 = (tot6 * 100);
    p6 = p6/totNum;
    p7 = (tot7 * 100);
    p7 = p7/totNum;;
    p8 = (tot8 * 100);
    p8 = p8/totNum;
    p9 = (tot9 * 100);
    p9 = p9/totNum;
    printf("Total de ocorrencias: %i\n", totNum);
    printf("(0, %i, %.2f) ", tot0, p0);
    printf("(1, %i, %.2f) ", tot1, p1);
    printf("(2, %i, %.2f) ", tot2, p2);
    printf("(3, %i, %.2f) ", tot3, p3);
    printf("(4, %i, %.2f) ", tot4, p4);
    printf("(5, %i, %.2f) ", tot5, p5);
    printf("(6, %i, %.2f) ", tot6, p6);
    printf("(7, %i, %.2f) ", tot7, p7);
    printf("(8, %i, %.2f) ", tot8, p8);
    printf("(9, %i, %.2f)", tot9, p9);

    return 0;
}
