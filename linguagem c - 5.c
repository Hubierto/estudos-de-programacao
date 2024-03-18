#include <stdio.h>

int main() {
	
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota, media;
	
	system("cls || clear");
	
	printf("escreva o nome do aluno: ");
	scanf("%s",&nome);
	
	printf("digite a idade do aluno: ");
	scanf("%i",&idade);
	
	printf("\ndigite a primeira nota: ");
	scanf("%f",&primeiraNota);
	
	printf("\ndigite a segunda nota: ");
	scanf("%f",&segundaNota);
	
	printf("\ndigite a terceira nota: ");
	scanf("%f",&terceiraNota);
	
	printf("\ndigite a quarta nota: ");
	scanf("%f",&quartaNota);
	
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota)/4;
	
	printf("a media e: %.1f", media);
	
	system("cls || clear");
	
	printf("\n===EXIBINDO RESULTADOS===/N");
	printf("\nSeu nome: %s", nome);
	printf("\nSua idade: %i", idade);
	printf("\nPrimeira nota: %.1f", primeiraNota);
	printf("\nSegunda nota: %.1f", segundaNota);
	printf("\nTerceira nota: %.1f", terceiraNota);
	printf("\nQuarta nota: %.1f", quartaNota);
	printf("\nMédia: %.1f", media);
	}
