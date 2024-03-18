#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//setLocale(LC_ALL, "portuguese);
	setLocale(LC_ALL, "");
	
	
	float primeiroNumero, segundoNumero;
	float soma, subtracao, multiplicacao, divisao;
	
	
	printf("digite o primeiro numero: ");
	scanf("%f",&primeiroNumero);
	
	printf("digite o segundo numero: ");
	scanf("%f",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	//system("cls); //Limpa o terminal no Windows.
	//system("clear"); //Limpa o terminal no Linux
	system("cls || clear"); //Lompa o terminal no Windows e no Linux
	 
	printf("=== EXIBINDO RESULTADOS ===");
	printf("Primeiro número: %.1f", primeiroNumero);
	printf("Segundo número: %.1f", segundoNumero);
	printf("Soma: %.1f", soma);
	printf("Subtraçã: %.1f", subtracao);
	printf("Multiplicação: %.1f", multiplicacao);
	printf("Divisão: %.1f", divisao);
	return 0;
}
