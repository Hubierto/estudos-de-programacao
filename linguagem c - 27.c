#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main () {
	setlocale(LC_ALL,"");
	
	float nota, soma, media;
	int contador = 0;
	char resposta;
	
	printf("Digite uma nota: ");
	scanf("%f",&nota);
	
	fflush(stdin);
	
	printf("Deseja inserir mais uma nota: ");
	scanf("%c",&resposta);
	resposta = toupper(resposta);
	
	soma += nota;
	contador++;
	
	media = soma/contador;
	
	printf("\n ===EXIBINDO RESULTADOS ===\N");
	printf("Média: %.1f \n",media);
	
	return 0;
	}
