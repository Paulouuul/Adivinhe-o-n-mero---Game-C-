#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
  srand(time(NULL));

  int a = rand()% 1000;

  int tentativas = 0;

  int numerodigitado; 

  while(numerodigitado!=a){

    printf("\n\nDigite um valor entre 1 e 1000: ");
    scanf("%d",&numerodigitado);
    tentativas++;

    if(numerodigitado>a){
      printf("\nEste número é grande demais.\n\n");
    }

    if(numerodigitado<a){
      printf("Este número é pequeno demais.");
    }
    }

  printf("\n\nParabéns!\nVocê achou o número correto em %d tentativas!",tentativas);
  return 0;
  }
