#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int primeiroNumero, segundoNumero, soma, produto;
	int menorValor, maiorValor;
	float media;
	
	printf("Digite um número inteiro: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite outro número: ");
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
	printf("Primeiro número: %i \n", primeiroNumero);
	printf("Segundo número: %i \n", segundoNumero);
	printf("Soma: %i \n", soma);
	printf("Produto: %i \n", produto);
	printf("Média: %.1f \n", media);
	
	if (primeiroNumero == segundoNumero) {
		printf("Os números são iguais");
	} else { printf("Maior número: %i \n", maiorValor);
			 printf("Menor número: %i \n", menorValor);		
	}
	
	return 0;
}
