#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int idade;
	
	printf("Digite a sua idade: "); 
	scanf("%i",&idade);
	
	if (idade < 18 || idade > 65) {
		printf("Voçê não é obrigado a votar!"); } else {
		printf("Voçê é obrigado à votar!");	
		}
		return 0;
		
}
