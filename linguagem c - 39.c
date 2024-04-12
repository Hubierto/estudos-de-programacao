#include <stdio.h>
#include <locale.h>

#define TAM 2

int main(){
	setlocale(LC_ALL,"");
	
	int numeros[TAM], pares = 0, impares = 0, i;
	
	printf("=== Solicitando dados ===");
	for(i = 0; i < TAM; i++) {
		printf("\nDigite seu %iº número: ", i + 1);
		scanf("%i",&numeros[i]);
		
		if(numeros[i] % 2 == 0) {
			pares++;
	}  else {  
		impares++; 
		}
}
	printf("=== Exibindo o resultado ===\n");
	
	for(i = 0; i < TAM; i++) {
		printf("%iº número: %i \n", i + 1, numeros[i]);
	}	
	printf("\nPares: %i", pares);
	printf("\nImpares: %i", impares);
	
	return 0;
	
}
