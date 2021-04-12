#include <stdio.h>
#include <math.h>

int main(){
	int n, i;
	float soma = 0, pi;

	scanf("%i", &n);

	for (i=1; i<=n; i++){
		pi= 6.000000/(i*i);
		soma= soma+pi;
	}

	printf("%.6f", sqrt(soma));
	return 0;
}
