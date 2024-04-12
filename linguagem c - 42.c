#include <stdio.h>
#include <locale.h>

#define TAM 2

int main() {
	setlocale(LC_ALL,"");
	
	int numeros[TAM], i, numeroNegativo;
	
	printf("=== SOLICITAÇÃO DE DADOS ===\n");
	for (i = 0; i < 5; i++) {
		printf("Digite o %iº número: ", i + 1);
		scanf("%i",&numeros[i]);
		
		if (numeros[i] < 0) {
			numeros[i] = 0;
		}
	}
	printf("\n=== EXIBINDO RESULTADOS ===\n");
	for	(i = 0; i < 5; i++) {
		printf("%iº número: %i \n", i + 1, numeros[i]);
	}
	return 0;
	}
	
