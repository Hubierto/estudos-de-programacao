#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int numero, sucessor, antecessor;
	
	printf("Digite um número inteiro: ");
	scanf("%i",&numero);
	
	system("cls || clear");
	
	printf("=== EXIBINDO RESULTADOS ===");
	
	antecessor = numero -1;
	sucessor = numero +1;
	
    printf("\nNúmero sucessor: %i", sucessor);
    printf("\nNúmero antecessor: %i", antecessor);
    
    return 0;
}
