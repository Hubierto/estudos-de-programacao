#include<stdio.h>
#include<locale.h>

#define TAM 5

int main() {
	setlocale(LC_ALL,"");
	
	int numeros[TAM], qtdNumInserido, i, numerosPares = 0;
	int numerosImp = 0, numerosN = 0, numerosP = 0;
	
	printf("Solicitando dados: \n");
	for (i = 0; i < TAM; i++) {
		printf("Digite o %i� numero: ", i+1);
		scanf("%i",&numeros[i]);
		
		
		if (numeros[i] % 2 == 0) {
			numerosPares++;
	}   else  {
		    numerosImp++;
	}
	
	    if (numeros[i] < 0) {
	    	numerosN++;
		} else if (numeros[i] == 0) {
		} else {
		 numerosP++;
		}
	
	qtdNumInserido++;
}

	printf("\nExibindo resultados: \n");
	for (i = 0; i < TAM; i++) {
		printf("\nSeu %i� valor: %i \n", i + 1, numeros[i]);}
		
		printf("\nQuantidade de n�meros pares: %i \n", numerosPares);
		printf("\nQuantidade de n�meros impares: %i \n", numerosImp);
	    printf("\nQuantidade de n�meros positivos: %i \n", numerosP);
	    printf("\nQuantidade de n�meros negativos: %i \n", numerosN);
	    printf("\nQuantidade de n�meros inseridos: %i \n", qtdNumInserido);
	    
	return 0;
	
    }
