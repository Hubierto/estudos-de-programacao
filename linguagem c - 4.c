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
	printf("Primeiro n�mero: %.1f", primeiroNumero);
	printf("Segundo n�mero: %.1f", segundoNumero);
	printf("Soma: %.1f", soma);
	printf("Subtra��: %.1f", subtracao);
	printf("Multiplica��o: %.1f", multiplicacao);
	printf("Divis�o: %.1f", divisao);
	return 0;
}
