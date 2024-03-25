#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
    int i, numero, pares =  0, impares = 0;
    
    for(i = 1; i <= 5; i++){
    	printf("digite o %iº numero: ", i);
    	scanf("%i", &numero);
    	
    	if (numero % 2 == 0) {
    		pares++;
		} else {
			impares++;
		}
	}
	
	printf("\n=== EXIBINDO RESULTADOS ===");
	printf("pares: %i \n", pares);
	printf("impares: %i \n ", impares);
		
	
	
	
	
	return 0;
	
}
