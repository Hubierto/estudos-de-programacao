#include <stdio.h>
#include <locale.h>

#define TAM 2

int main() {
	setlocale(LC_ALL,"");
	
	float numeros[TAM], somaNumeros = 0;
	int i, numerosNegativos = 0;
	
	printf("Solicitando dados");
	for (i = 0; i < TAM; i++) {
	printf("\nDigite seu %i� n�mero: ", i + 1 );
	scanf("%f",&numeros[i]);
	
	if (numeros[i] < 0) {
		numerosNegativos++;
	} else if (numeros[i] > 0) {
		somaNumeros += numeros[i];
	}
}
	printf("Exibindo resultados");
	for (i = 0; i < TAM; i++) {
	printf("\nSeu %i� n�mero: %.1f \n",i + 1, numeros[i]);}
	
	printf("Quantidade de n�meros negativos: %i \n", numerosNegativos);
	printf("Soma de n�meros positivos: %.1f \n", somaNumeros);
	
	return 0;
}
