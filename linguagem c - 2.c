#include <stdio.h>

int main() {
	//declarando variáveis
	char nome[200] = "Marta"; // Cadeia
	char sexo = 'F'; // Caracter
	int idade = 20; // Inteiro
	float peso = 58.400; //Real
	
	//exibindo resultados
	printf("\n=== EXIBINDO RESULTADOS===\n");
	printf("Nome: %s \n", nome); // %s -> string -> cadeia
	printf("sexo: %c \n", sexo); // %c -> char -> caracter
    printf("idade: %i \n", idade); // %i -> int -> inteiro
    printf("peso: %f \n", peso); // %f -> float -> real
    
    return 0;
}
