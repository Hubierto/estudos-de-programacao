#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float salario, quantidadeDeSalarios, salarioMinimo = 1412.00;
	
	printf("Digite o valor do seu sal�rio: ");
	scanf("%f",&salario);
	
	quantidadeDeSalarios = salario/salarioMinimo;
	
	system("cls || clear");
	
	printf("\n=== EXIBINDO RESULTADOS ===");
	
}
