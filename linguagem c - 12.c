#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int primeiroNumero, segundoNumero, soma, produto;
	int menorValor, maiorValor;
	float media;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite outro n�mero: ");
	scanf("%i",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	media = soma / (float) 2; //ou 2.0
	
	if (primeiroNumero < segundoNumero) {
		menorValor = primeiroNumero;
		maiorValor = segundoNumero;
	} else {
		menorValor = segundoNumero;
		maiorValor = primeiroNumero;
	}
	
	printf("\n=== EXIBINDO RESULTADOS === \n");
	printf("Primeiro n�mero: %i \n", primeiroNumero);
	printf("Segundo n�mero: %i \n", segundoNumero);
	printf("Soma: %i \n", soma);
	printf("Produto: %i \n", produto);
	printf("M�dia: %.1f \n", media);
	
	if (primeiroNumero == segundoNumero) {
		printf("Os n�meros s�o iguais");
	} else { printf("Maior n�mero: %i \n", maiorValor);
			 printf("Menor n�mero: %i \n", menorValor);		
	}
	
	return 0;
}
