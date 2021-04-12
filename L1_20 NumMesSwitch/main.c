#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, ano;

    scanf("%i %i", &num, &ano);

    if (num<1||num>12)
        {
            printf("opcao invalida");
        }

    switch(num)
    {
    {
        case 1:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("janeiro 31 % bissexto", ano);
                }
                else
                {
                    printf("janeiro 31 %i", ano);
                }

            break;
    }
    {
        case 2:
            if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("fevereiro 29 %i bissexto", ano);
                }
                else
                {
                    printf("fevereiro 28 %i", ano);
                }

            break;
    }
    {
        case 3:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("março 31 % bissexto", ano);
                }
                else
                {
                    printf("março 31 %i", ano);
                }

            break;
    }
    {
        case 4:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("abril 30 % bissexto", ano);
                }
                else
                {
                    printf("janeiro 30 %i", ano);
                }

            break;
    }
    {
        case 5:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("maio 31 % bissexto", ano);
                }
                else
                {
                    printf("maio 31 %i", ano);
                }

            break;
    }
    {
        case 6:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("junho 30 % bissexto", ano);
                }
                else
                {
                    printf("junho 30 %i", ano);
                }

            break;
    }
    {
        case 7:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("julho 31 % bissexto", ano);
                }
                else
                {
                    printf("julho 31 %i", ano);
                }

            break;
    }
    {
        case 8:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("agosto 31 % bissexto", ano);
                }
                else
                {
                    printf("agosto 31 %i", ano);
                }

            break;
    }
    {
        case 9:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("setembro 30 % bissexto", ano);
                }
                else
                {
                    printf("setembro 30 %i", ano);
                }

            break;
    }
    {
        case 10:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("outubro 31 % bissexto", ano);
                }
                else
                {
                    printf("outubro 31 %i", ano);
                }

            break;
    }
    {
        case 11:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("novembro 30 % bissexto", ano);
                }
                else
                {
                    printf("novembro 30 %i", ano);
                }

            break;
    }
    {
        case 12:

                if ((ano%4==0||ano%400==00)&&ano%100!=0)
                {
                    printf("dezembro 31 % bissexto", ano);
                }
                else
                {
                    printf("dezembro 31 %i", ano);
                }

            break;
    }
    }

    return 0;
}
