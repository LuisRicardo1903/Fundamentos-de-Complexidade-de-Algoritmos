#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 100
float somaVet(int *vetor1, int *vetor2, int *vetor3, int tam)
{
	int i;
	for(i=0;i<tam;i++)
		{
			vetor3[i]=0;
			vetor3[i] = vetor1[i]+vetor2[i];
		}
		return 1;
}

int main()
{

	int vetor1[TAM],vetor2[TAM],vetor3[TAM];
	int i,n;


		printf("Digite um tamanho para os dois vetores (MAX 100): ");
		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
        printf("Digite o valor para a casa %i do vetor 1: ", i);
		scanf("%d",&vetor1[i]);
		}
		printf("\n\n");
		for(i=0;i<n;i++)
		{
        printf("Digite o valor para a casa %i do vetor 2: ", i);
		scanf("%d",&vetor2[i]);
		}
		somaVet(vetor1,vetor2,vetor3,100);
		printf("\n\n############### RESULTADO #################\n\n\n");
		for(i=0;i<n;i++)
		{
		printf("A soma da %da casa dos vetores eh: %d\n",i+1,vetor3[i]);
		}

	return 0;
}
