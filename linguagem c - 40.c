#include <stdio.h>
#include <locale.h>

#define IeN 2

int main(){
	setlocale(LC_ALL,"");
	
	int idade[IeN], i;
	char nome[IeN][200];
	
	printf("=== EXIBINDO DADOS ===");
	for(i = 0; i < IeN; i++) {
		printf("\nDigite o %d� nome: ", i + 1);
		scanf("%s",&nome[i]);
		
		fflush(stdin);
		
		printf("\nDigite a %d� idade: ", i + 1);
		scanf("%i",&idade[i]);
}
     
    system("cls || clear"); 
    printf("=== Exibindo resultados ===");
	for(i = 0; i < IeN; i++){
	printf("\nSeu nome: %s� \n", nome[i]);
	printf("sua idade: %i� \n", idade[i]);
}

	return 0;	
}

