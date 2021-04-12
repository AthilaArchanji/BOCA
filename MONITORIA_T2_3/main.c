#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Rounds, B, Ad, Dd, Ld, Ag, Dg, Lg, i, valorD, valorG;

    scanf("%d", &Rounds);

    for (i = 0; i < Rounds; i++)
    {
        scanf("%i", &B);
        scanf("%i %i %i", &Ad, &Dd, &Ld);
        scanf("%i %i %i", &Ag, &Dg, &Lg);


        if(Ld%2==0)
        {
            valorD = ((Ad + Dd)/2)+B;
        }
            else if(Ld%2!=0)
            {
                valorD = ((Ad + Dd)/2);
            }
        if(Lg%2==0)
        {
            valorG = ((Ag + Dg)/2)+B;
        }
            else if(Lg%2!=0)
            {
                valorG = ((Ag + Dg)/2);
            }
        if(valorD==valorG)
        {
            printf("Empate\n");
        }
        if(valorD<valorG)
        {
            printf("Guarte\n");
        }
        if(valorD>valorG)
        {
            printf("Dabriel\n");
        }
    }

    return 0;
}
