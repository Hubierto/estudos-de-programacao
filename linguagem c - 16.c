#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main() {
	setlocale(LC_ALL,"");
	
	char sexo;
	float altura, pesoIdeal;
	
	printf("Digite o seu sexo - utilize M ou F: ");
	scanf("%c",&sexo);
	
	printf("Digite a sua altura: ");
	scanf("%f",&altura);
	
	sexo = toupper(sexo); //converte em maiúsculo
	
	switch(sexo) {
		case 'M':
			pesoIdeal = (72.7 * altura)-58;
			break;
		case 'F':
		    pesoIdeal = (62.1 * altura)-44.7;
			break;	
		default:
		    printf("opção invalida!");
		}
		
	printf("=== EXIBINDO RESULTADOS === \n");
	printf("peso ideal: %.2f \n", pesoIdeal);	
				
			
			
			return 0;
	
	
	
	
}
