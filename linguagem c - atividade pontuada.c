#include <stdio.h>
#include <locale.h>

#define TAM 5
int main(){
setlocale(LC_ALL,"");

int numeros[5], i, pares = 0, impares = 0, negativos = 0, positivos = 0;
int menorN, maiorN, paresMedia, imparesMedia, Mediatotal;


printf("solicitando dados: \n");
    for(i = 0; i < 5; i ++) {
	printf("Digite o %i� numero: ", i+1);
	scanf("%i",&numeros[i]);
	
	if (numeros[i] % 2 == 0) {
		pares++;
	} else {
		impares++;
		
	}
	
	if(numeros[i]< 0){
		negativos++;
	}   else if (numeros[i]> 0){
		positivos ++; 
	}
	
	if (numeros[i] < maiorN) {
		maiorN = numeros[i];
	} else if 
		(numeros[i] > menorN) {
		 menorN  = numeros[i];
		}
		   	
	}

      
      
      printf("=== EXIBINDO RESULTADOS ===");
      for (i = 5-1; i >= 0; i--) {
      printf("\n%i� n�mero: %i",i+1, numeros[i]);}	
      printf("\nQuantidade de n�meros pares: %i\n", pares);
      printf("\nQuantidade de n�meros impares: %i\n", impares);
      printf("\nQuantidade de n�meros positivos: %i \n", positivos);
	  printf("\nQuantidade de n�meros negativos: %i\n", negativos);
	  printf("\nQuantidade de n�meros inseridos: %i\n", TAM);
	
	

	
	

	
	
	
	
return 0;	
	
}

