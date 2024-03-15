#include <stdio.h>

int main() {
	//declarando variáveis
	char nome[200]; // Cadeia
	char sexo; // Caracter
	int idade; // Inteiro
	float peso; //Real
	
	//solicitando dados para o usuáio
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	
	fflush(stdin); //Limpa o cache de imput
	
	printf("Digie o seu sexo - M ou F: ");
	scanf("%c",&sexo);
	
	printf("Digite a sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite o seu peso: ");
	scanf("%f",&peso);
	
	
	//exibindo resultados
	printf("\n=== EXIBINDO RESULTADOS===\n");
	printf("Nome: %s \n", nome); // %s -> string -> cadeia
	printf("sexo: %c \n", sexo); // %c -> char -> caracter
    printf("idade: %i \n", idade); // %i -> int -> inteiro
    printf("peso: %f \n", peso); // %f -> float -> real
    
    return 0;
}
