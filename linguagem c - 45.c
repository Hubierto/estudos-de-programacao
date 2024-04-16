#include <stdio.h>


int main() {


//Recebendo valores númericos
int numeros[2][2];
int l, c;

printf("Digite os elementos para matriz: \n");
for(l = 0; l < 2; l++) {
	for(c = 0; c < 2; c++) {
		printf("Elemento da linha %d coluna %d: ", l + 1, c + 1 );
		scanf("%d",&numeros[l][c]);
		
	}
}

//Exibindo os dados em uma matriz em dois laços de repetição.
for(l = 0; l < 2; l++){
	for (c = 0; c < 2; c++) {
		printf("\nElemento da linha %d coluna %d: %d\n ", l + 1, c + 1, numeros[l][c]);
		
	}
}

return 0;
}
