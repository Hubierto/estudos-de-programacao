#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	printf("\n=== EXIBINDO RESULTADOS ===");
	
	if (numero % 2 == 0) {
		printf("\npar.");
	} else {
		printf("ímpar.");
	}
	return 0;
}
