#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int numero, sucessor, antecessor;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i",&numero);
	
	system("cls || clear");
	
	printf("=== EXIBINDO RESULTADOS ===");
	
	antecessor = numero -1;
	sucessor = numero +1;
	
    printf("\nN�mero sucessor: %i", sucessor);
    printf("\nN�mero antecessor: %i", antecessor);
    
    return 0;
}
