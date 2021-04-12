#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    scanf("%i" "%i" "%i", &A, &B, &C);
    if (A<B && A<C){
        if (B<C)
        printf("N1=%i, N2=%i, N3=%i", A, B, C);
        else
        printf("N1=%i, N3=%i, N2=%i", A, C, B);
    }if (B<A && B<C){
        if (A<C)
        printf("N2=%i, N1=%i, N3=%i", B, A, C);
        else
        printf("N2=%i, N3=%i, N1=%i", B, C, A);
    }if (C<A && C<B){
        if (A<B)
        printf("N3=%i, N1=%i, N2=%i", C, A, B);
        else
        printf("N3=%i, N2=%i, N1=%i", C, B, A);
    }
    return 0;
}
