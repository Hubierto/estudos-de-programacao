#include <stdio.h>
#include <locale.h>
#include <limits.h>
#define TAM 5
 
int main() {
	setlocale(LC_ALL,"");
	
	int numeros[5], maiorNumero = INT_MIN, menorNumero = INT_MAX, i;
	
	printf("Digite seus cinco números:");
	for(i = 0; i < TAM; i++) {
		printf("\n Digite o %iº número: ",i +1);
		scanf("%i",&numeros[i]);
		
		if (numeros[i] > maiorNumero) {
			maiorNumero = numeros[i];
		}
		
		if (numeros[i] < menorNumero) {
			menorNumero = numeros[i];
		}
}
	printf("\n=== EXIBINDO OS NÚMEROS ===\n");
	for(i = 0; i < TAM; i++) {
	    printf("%iº número: %i \n", i+1, numeros[i]);
}

    printf("\nMaior numero: %i \n", maiorNumero);
    printf("\nMenor numero: %i \n", menorNumero);
return 0;
}
