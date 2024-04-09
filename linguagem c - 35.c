#include <stdio.h>
#include <locale.h>

#define TAM 3
 
int main() {
	setlocale(LC_ALL,"");
	
	int vetor[TAM]; 
	int i;
	
	printf("Digite três notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("Nota %d: ", i + 1);
		scanf("%d", &vetor[i]);
		fflush(stdin);
}
    
    printf("\nExibindo as notas: \n");
    for (i = 0; i < TAM; i++) {
    	printf("Nota %d: %d\n", i+1, vetor[i]);
	}
	
	return 0;
}
