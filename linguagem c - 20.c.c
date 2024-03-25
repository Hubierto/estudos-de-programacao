#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int i, numero;
	
	printf("Digite um número inteiro: ");
	scanf("%i",&numero);
	
	for(i = 1; i <= 10; i++) {
		printf("%d x %d = %d \n", numero, i, i*numero);
	}
	return 0;
	
}
