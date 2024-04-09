#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
//	Exibindo 5 números inteiros e exibindo no vetor.
	int vetor[5];
	int i;
	
	printf("Digite os elementos do vetor: \n");
    for (i = 0; i < 5; i++) {
    	printf("elemento %d: ", i + 1);
    	scanf("%d", &vetor[i]);
    	
    	vetor [5] = vetor [4] + vetor [3}
	} 
//	Exibindo os dados em um vetor em um laço de reoetição.
    printf("\nExibindo os elementos do vetor:\n");
    for (i = 0; i < 5; i++) {
    	printf("Elemento %d: %d\n", i+1, vetor[i]);
	}
	return 0;
}
