#include <stdio.h>
#include <locale.h>

#define TAM 3

int main () {
	setlocale(LC_ALL,"");
	
//	Exibindo 5 números inteiros e exibindo no vetor.
	int vetor[TAM];
	int i;
	
	printf("Digite os elementos do vetor: \n");
    for (i = 0; i < TAM; i++) {
    	printf("elemento %d: ", i + 1);
    	scanf("%d", &vetor[i]);
	} 
	
	
//	Exibindo os dados em um vetor em um laço de reoetição.
    printf("\nExibindo os elementos do vetor: \n");
    for (i = 0; i < TAM; i++) {
    	printf("Elemento %d: %d\n", i+1, vetor[i]);
	}
	return 0;
}
