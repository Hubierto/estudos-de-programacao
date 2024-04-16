#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"");
    
    //dois alunos com até 200 characters
    char alunos[2][200];
    int i, j;
    //dois alunos, três notas
    float notas[2][3]; 
    
    printf("=== Solicitando dados para o usuario ===");
    for(i = 0; i < 2; i++) {
        printf("\nDigite o nome do %iº aluno: ", i+1);
        scanf("%s",&alunos[i]);
     
    
	for(j = 0; j < 3; j++) {
        printf("Digite a %iª nota: ", j+1);
        scanf("%f",&notas[i][j]);
        
    }
    
    printf("\n");
    
}

    printf("=== Exibindo dados para o usuario ===\n");
    for(i = 0; i < 2; i++) {
    	printf("%iº aluno: %s \n", i+1, alunos[i]);
    	
    	for(j = 0; j < 3; j++) {
    		printf("%iª nota: %.1f \n",j + 1, notas[i][j]);
		}
		
		printf("\n");
}
	return 0;
	
}

        

