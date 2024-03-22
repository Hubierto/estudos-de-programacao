#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int macas;
	float valorDasMacas, valorTotalDasMacas;
	
	printf("Maçãs desejadas: ");
	scanf("%i",&macas);
	
	if (macas <12) {
		valorDasMacas = 1.30;} else {
			valorDasMacas = 1.00;}
			
	valorTotalDasMacas = valorDasMacas * macas;	
	
	system("cls || clear");
	
	printf("=== EXIBINDO RESULTADOS === \n");
	printf("Maçãs compradas: %i \n", macas);
	printf("Valor total das maçãs: %.2f \n", valorTotalDasMacas);
			
			
		return 0;	
}
