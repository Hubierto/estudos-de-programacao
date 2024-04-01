#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main () {
	setlocale(LC_ALL,"");
	
	int contador = 0;
	float nota, soma = 0, media;
	char resposta;
	
	do {
		printf("insira uma nota: ");
		scanf("%f",&nota);
		
		fflush(stdin);
		
		system("cls || clear");
		printf("Escolha uma das opções abaixo: \n");
		printf("S - inserir mais uma nota: \n");
		printf("P - ver quantas notas foram inseridas: \n");
		printf("N - calcular a Média aritimética das notas informadas: \n");
		printf("Resposta: ");
		scanf("%c",&resposta);		
		resposta = toupper(resposta);
		
		soma += nota;
		contador ++;
		
		switch(resposta) {
			case 'S':
				system("cls || clear");
				break;
			case 'P':
				printf("\nQuantidade de notas inseridas: %i \n");
				sleep(5);
				system("cls || clear");
			    break;
		    case 'N':
		    	system("cls || clear");
		    	break;
		    default:
		    	printf("Opção invalida! \n");
		    	sleep(5);
		    	system("cls || clear");
	    }
    }while(resposta != 'N');
    media = soma / contador;
    
    printf("\n=== Exibindo resultados ==== \n");
    printf("Média: %.1f \n", media);
		    	
		    		
		
		
		
		return 0;
	}
	
