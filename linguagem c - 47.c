#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"");
    
    //dois alunos com at� 200 characters
    char alunos[2][200];
    int i, j;
    //dois alunos, tr�s notas
    float notas[2][3]; 
    
    printf("=== Solicitando dados para o usuario ===");
    for(i = 0; i < 2; i++) {
        printf("\nDigite o nome do %i� aluno: ", i+1);
        scanf("%s",&alunos[i]);
     
    
	for(j = 0; j < 3; j++) {
        printf("Digite a %i� nota: ", j+1);
        scanf("%f",&notas[i][j]);
        
    }
    
    printf("\n");
    
}

    printf("=== Exibindo dados para o usuario ===\n");
    for(i = 0; i < 2; i++) {
    	printf("%i� aluno: %s \n", i+1, alunos[i]);
    	
    	for(j = 0; j < 3; j++) {
    		printf("%i� nota: %.1f \n",j + 1, notas[i][j]);
		}
		
		printf("\n");
}
	return 0;
	
}

        

