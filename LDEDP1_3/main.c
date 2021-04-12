#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, i = 1;

    scanf("%d", &a);

    for(i = 1; i < a; i++)
    {
        if(i%2 == 0 || i%3 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
