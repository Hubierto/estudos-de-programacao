#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	char disciplina[3][200];
	int i, j;
	float notas[3][2];
	float media, soma = 0;
	
	printf("Solicitando dados para o usu�rio");
	for (i = 0; i < 3; i++) {
		printf("\nDigite o nome da %i� disciplina: ", i + 1);
		scanf("%s",&disciplina[i]);
		
	for(i = 0; i < 2; i++) {
		printf("\nDigite a %i� nota: ", i+1);
		scanf("%f",&notas[i][j]);
		
		soma += notas[i][j];
		
	}	
	
	media = soma / 2;
	soma = 0;
	
	
	}
	
	
	printf("=== Exibindo dados para o usu�rio ===\n");
	for (i = 0; i < 3; i++) {
	     printf("%i� Disciplina: %s \n",i+1, disciplina[i]);
	     
	for(i = 0; i < 2; i++) {
		printf("%i� nota: %.1f \n", i+1, notas[i][j]);
	}
	
		printf("M�dia: %.1f ", media);
		printf("\n");
		
     if (media >= 7) {
			printf("Aprovado!");
		} else if (media >= 5) {
			printf("Recupera��o!");
		} else {
			printf("Reprovado!");
		}
		
	}
	return 0;
	
}
