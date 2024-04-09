#include <stdio.h>
#include <locale.h>

#define TAM 4
 
int main() {
	setlocale(LC_ALL,"");
	
	int i;
	float notas[TAM], soma = 0, media = 0;
	
	printf("Digite suas quatro notas:  ");
	for(i = 0; i < TAM; i++) {
	      printf("\nDigite a %iª nota: ", i + 1);
		  scanf("%f", &notas[i]);
		  
		  soma += notas[i];
	}
	
	media = soma / (float) TAM;
	
	printf("\nExibindo as notas informadas: \n");
	for (i = 0; i < TAM; i++) {
		printf("%dª nota: %.1f \n", i+1, notas[i]);
    } 
    
    printf("\nMédia: %.1f \n", media);
    
    if (media >= 7) {
    	printf("Situação: Aprovado \n");
	} else if (media >= 5) {
	   printf("Situação: Recuperação \n");
    } else {
	   printf("Situção: Reprovado \n");
    }
	
	return 0;
}
