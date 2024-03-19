#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	char nome[5];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, soma, media;
	
	printf("escreva o seu nome: ");
	//scanf("%s",&nome);
	//gets(nome); //não muito seguro
	fgets(nome, 5, stdin);
	nome[strcspn(nome, "\n")] = 0;
	
	fflush(stdin);
	
	printf("digite a sua idade: ");
	scanf("%d",&idade);
	
	printf("digite sua primeira nota: ");
	scanf("%f",&primeiraNota);
	
	printf("digite sua segunda nota: ");
	scanf("%f",&segundaNota);
	
	printf("digite sua terceira nota: ");
	scanf("%f",&terceiraNota);
	
	soma = primeiraNota + segundaNota + terceiraNota;
	media = soma / 3;
	
	system("cls || clear");
	
	printf("=== EXIBINDO RESULTADOS === \n");
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Primeira nota: %f \n", primeiraNota);
	printf("Segunda nota: %f \n", segundaNota);
	printf("Terceira nota: %f \n",terceiraNota);
	printf("Média: %f \n", media);
	
	if (media >= 7 ) {
		printf("APROVADO");} else {
			printf("REPROVADO");
		}
	
	return 0;
}
	
