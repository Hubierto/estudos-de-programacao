#include <stdio.h>
#include <locale.h>

#define TAM 6

int main() {
	setlocale(LC_ALL,"");
	
	int numeros[TAM], i;
	
	printf("=== Solicitando dados ===");
	for (i = 0; i < TAM; i++) {
	    do {
		    printf("\nDigite o %iº valor: ", i + 1);
		    scanf("%i",&numeros[i]); 
		}while (numeros[i] < 0 || numeros[i] % 2 == 1);
}

	printf("\n=== Exibindo resultados na ordem inversa ===");
	for (i = TAM - 1; i >= 0; i--) {
		printf("\nSeu %iº valor: %i ", i+1, numeros[i]);
	}
	return 0;
}
	 
