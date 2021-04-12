#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n, m, con, mult, param;

	scanf ("%i %i", &n, &m);

	for(n = n+1; n<m; n++)
    {
		con=0;
		for(i=1; i<=n; i++)
		{
			if(n%i ==0)
			{
				con++;
			}
		}
		if(con==2)
		{
			printf("%i\n", n);
            mult = n+1;
            param = 0;

            while(mult < m)
            {
                if(mult%n==0)
                {
                    printf("%i ", mult);
                    param++;
                }
                mult++;
            }
            if(param==0){ printf("*");}
            printf("\n");
		}
	}
	return 0;
}
