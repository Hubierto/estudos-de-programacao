#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%i",&numero);
	
	printf("\n=== EXIBINDO RESULTADOS ===");
	
	if (numero % 2 == 0) {
		printf("\npar.");
	} else {
		printf("�mpar.");
	}
	return 0;
}
