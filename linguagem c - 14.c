#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int macas;
	float valorDasMacas, valorTotalDasMacas;
	
	printf("Ma��s desejadas: ");
	scanf("%i",&macas);
	
	if (macas <12) {
		valorDasMacas = 1.30;} else {
			valorDasMacas = 1.00;}
			
	valorTotalDasMacas = valorDasMacas * macas;	
	
	system("cls || clear");
	
	printf("=== EXIBINDO RESULTADOS === \n");
	printf("Ma��s compradas: %i \n", macas);
	printf("Valor total das ma��s: %f \n", valorTotalDasMacas);
			
			
		return 0;	
}
