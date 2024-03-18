#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float valor, desconto;
	
	printf("Digite um valor: ");
	scanf("%f",&valor);
	
	desconto = valor * 0.1;
	
	system("cls || clear");
	
	printf("=== EXIBINDO RSULTADOS ===");
	printf("\nSeu desconto: %.1f", desconto);
	printf("\nSeu valor com 10 por cento de desconto: %.1f", valor*0.9);
	
	return 0;
	
	
	
}
