#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int i, j;
	char bandas[3][200], integrantes[3][5][200];
	
	printf("Solicitando dados para o usu�rio");
	for (i = 0; i < 3; i++) {
		printf("\nDigite o nome da %d� banda: ", i+1);
		scanf("%s",&bandas[i]);
		
	for (j = 0; j < 5; j++) {
		printf("Digite o nome da %d� integrante dessa banda: ", j+1);
		scanf("%s",&integrantes[i][j]);
	}	
}
	printf("=== Exibindo dados para o usu�rio ===\n");
	for (i = 0; i < 3; i++) {
		printf("Banda: %s\n", bandas[i]);
		
	for (j = 0; j < 5; j++) {
		printf("integrantes: %s\n", integrantes[i][j]);
	}	
	}
	
		return 0;
	}

