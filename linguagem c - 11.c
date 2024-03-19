#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "");
	
	char login[200], senha[200], loginCadastrado[200] = "Marta";
	char senhaCadastrada[200] = "abc123";
	
	printf("Digite o login: ");
	scanf("%s",&login);
	
	printf("Digite a senha: ");
	scanf("%s",&senha);
	
	// if (login == loginSalvo && senha == senhaSalva)
	// && -> e -> and
	// || -> ou -> or
	if(strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0) 
      { printf("BEM VINDO!");} 
	  else {printf("ACESSO NEGADO!");}
      	
      	return 0;
}

