#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	char disciplina[3][200];
	int i, j;
	float notas[3][2];
	float media, soma = 0;
	
	printf("Solicitando dados para o usuário");
	for (i = 0; i < 3; i++) {
		printf("\nDigite o nome da %iª disciplina: ", i + 1);
		scanf("%s",&disciplina[i]);
		
	for(i = 0; i < 2; i++) {
		printf("\nDigite a %iª nota: ", i+1);
		scanf("%f",&notas[i][j]);
		
		soma += notas[i][j];
		
	}	
	
	media = soma / 2;
	soma = 0;
	
	
	}
	
	
	printf("=== Exibindo dados para o usuário ===\n");
	for (i = 0; i < 3; i++) {
	     printf("%iª Disciplina: %s \n",i+1, disciplina[i]);
	     
	for(i = 0; i < 2; i++) {
		printf("%iª nota: %.1f \n", i+1, notas[i][j]);
	}
	
		printf("Média: %.1f ", media);
		printf("\n");
		
     if (media >= 7) {
			printf("Aprovado!");
		} else if (media >= 5) {
			printf("Recuperação!");
		} else {
			printf("Reprovado!");
		}
		
	}
	return 0;
	
}
