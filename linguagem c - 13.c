#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int idade;
	
	printf("Digite a sua idade: "); 
	scanf("%i",&idade);
	
	if (idade < 18 || idade > 65) {
		printf("Vo�� n�o � obrigado a votar!"); } else {
		printf("Vo�� � obrigado � votar!");	
		}
		return 0;
		
}
