#include <stdio.h>
#include <stdlib.h>

int ehpar(int num);
int ehImpar(int num);
int ehPrimo(int num);

int main(){

  int opcao, n;

  do{
    printf("escolha uma opção: \n");
    printf("[1] Verificar se eh par\n");
		printf("[2] Verificar se eh impar\n");
		printf("[3] Informar se eh primo\n");
		printf("[0] Sair do programa\n");
    scanf("%d", &opcao);



    switch(opcao){

      case 1: printf("informe um numero inteiro positivo: ");
              scanf("%d", &n);
              if (ehpar(n))
              {
                printf("O valor %d eh par\n", n);
              }
              else
              {
                printf("O valor %d nao eh par\n", n);
              }

              break;
      case 2: printf("informe um numero inteiro positivo: ");
              scanf("%d", &n);
              if (ehImpar(n))
              {
                  printf("o valor %d eh impar\n", n);
              }
              else
              {
                  printf("o valor %d nao eh impar\n", n);
              }
              break;
      case 3: printf("informe um numero inteiro positivo: ");
              scanf("%d", &n);
              if (ehPrimo(n) == 2)
              {
                  printf("o valor %d eh primo\n", n);
              }
              else
              {
                  printf("o valor %d nao eh primo\n", n);
              }

              break;
      case 0: printf("Fim do programa!\n");
              break;
      default: printf("Opcao invalida! Tente de novo!\n");
    }

  }while(opcao < 0 || opcao > 3);

  return 0;
}

int ehpar(int num)
{
  return num%2 == 0;
}
int ehImpar(int num)
{
    return num%2 != 0;
}

int ehPrimo(int num)
{
    int i, cont = 0;

    for(i = 1; i<=num; i++)
        {
            if(num%i==0)
            {
                cont++;
            }
        }
        return cont;
}
