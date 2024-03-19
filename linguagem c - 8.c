#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float salario, quantidadeDeSalarios, salarioMinimo = 1412.00;
	
	printf("Digite o valor do seu salário: ");
	scanf("%f",&salario);
	
	quantidadeDeSalarios = salario/salarioMinimo;
	
	system("cls || clear");
	
	printf("\n=== EXIBINDO RESULTADOS ===");
	printf("Salário informado: %.2f \n",salario);
	printf("Quantidades de salários %.1f\n",quantidadeDeSalarios);
	
	return 0;
	
}
