#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
    float notas, soma, media;
	int i;
	
	for (i = 1; i <= 4; i++) {
		printf("digite o %i� n�mero: ", i);
		scanf("%f",&notas);
		
		soma = soma + notas;
	}
	
	media = soma/ 4;
	
	printf("\n Exibindo resultados \n");
	printf("m�dia %.1f \n", media);
	
	return 0;
	}    
