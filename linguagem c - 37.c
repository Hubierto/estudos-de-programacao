#include <stdio.h>
#include <locale.h>

#define TAM 4
 
int main() {
	setlocale(LC_ALL,"");
	
	int i;
	float notas[TAM], soma = 0, media = 0;
	
	printf("Digite suas quatro notas:  ");
	for(i = 0; i < TAM; i++) {
	      printf("\nDigite a %i� nota: ", i + 1);
		  scanf("%f", &notas[i]);
		  
		  soma += notas[i];
	}
	
	media = soma / (float) TAM;
	
	printf("\nExibindo as notas informadas: \n");
	for (i = 0; i < TAM; i++) {
		printf("%d� nota: %.1f \n", i+1, notas[i]);
    } 
    
    printf("\nM�dia: %.1f \n", media);
    
    if (media >= 7) {
    	printf("Situa��o: Aprovado \n");
	} else if (media >= 5) {
	   printf("Situa��o: Recupera��o \n");
    } else {
	   printf("Situ��o: Reprovado \n");
    }
	
	return 0;
}
