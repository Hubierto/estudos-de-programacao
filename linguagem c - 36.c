#include <stdio.h>
#include <locale.h>

#define TAM 3
 
int main() {
	setlocale(LC_ALL,"");
	
	float notas[TAM], soma = 0, media;
	int i;
	
	printf("Digite suas notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("%i� Nota: ", i + 1);
		scanf("%f",&notas[i]);
		
		soma += notas[i];
}

    media = soma / (float) TAM;

    printf("\nExibindo notas\n");
    for (i = 0; i < TAM; i++) {
    	printf("%i� Nota: %.1f\n", i+1, notas[i] );
	}
	
	printf("M�dia: %.1f \n", media);
	
	return 0;
}
