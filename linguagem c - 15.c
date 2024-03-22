#include<stdio.h>
#include<locale.h>
#include <string.H>

int main() {
	setlocale(LC_ALL,"");
	
	char aluno[200], resultado[200], conceito;
	float primeiraNota, segundaNota, media;
	
	printf("Digite o nome do aluno: ");
	scanf("%s",&aluno);
	
	printf("Primeira nota: ");
	scanf("%f",&primeiraNota);
	
	printf("Segunda nota: ");
	scanf("%f",&segundaNota);
	
	media = (primeiraNota + segundaNota)/ (float)2;
	
	if (media >= 9) {
	    conceito = 'A';
	} else if  (media >= 7.5){
	
		conceito = 'B';
	} else if (media >= 6){
	
		conceito = 'C';
	} else if (media >= 4){
	
		conceito = 'D';
	} else {
		conceito = 'E';
	}   
	
	if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
		// resultado = "aprovado"
		strcpy(resultado, "aprovado");
    } else {
	    strcpy(resultado, "reprovado"); 
    }
	system("cls || clear");
	
    printf("=== EXIBINDO RESULTADOS === \n");
    printf("Aluno: %s \n", aluno);
    printf("Primeira nota: %.1f \n", primeiraNota);
    printf("segunda nota: %.1f \n\n", segundaNota);
	printf("Média: %.1f \n", media);
	printf("Conceito: %c \n", conceito);
	printf("Resultado: %s", resultado);	
	
	//pausa antes de iniciar a execução do código
	getchar();
	
	
	// Pausa antes de terminar a execução do código
	return 0;
}
