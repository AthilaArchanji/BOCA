#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V,n500,n100,n50,n10,n5,n1;

    scanf("%i", &V);
    if (V%500>=0){
        n500=V/500;
        V=V%500;
        if(n500>0) {printf("%i (500)", n500);}
    } if (V%100>=0){
        n100=V/100;
        V=V%100;
        if(n100>0) {printf(", %i (100)", n100);}
    } if (V%50>=0){
        n50=V/50;
        V=V%50;
        if(n50>0) {printf(", %i (50)", n50);}
    } if (V%10>=0){
        n10=V/10;
        V=V%10;
        if(n10>0) {printf(", %i (10)", n10);}
    } if (V%5>=0){
        n5=V/5;
        V=V%5;
        if(n5>0){printf(", %i (5)", n5);}
    } if (V%1>=0){
        n1=V/1;
        V=V%1;
        if(n1>0) printf(", %i (1)", n1);
    }printf(". Total: %i cedulas.",n500+n100+n50+n10+n5+n1);
    return 0;

}
