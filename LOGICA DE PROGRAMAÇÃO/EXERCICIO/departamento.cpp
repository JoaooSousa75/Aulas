#include <stdio.h>
#include <locale.h>


int main (){
	
	setlocale (LC_ALL,"Portuguese");
	
	int codigo;
	
	printf("Insira o C�digo do seu Departamento: ");
	scanf("%i", &codigo);


	if (codigo == 1)
		printf(" Seu departamento � o financeiro.");
		
	else if (codigo == 2)
	{printf(" Seu departamento � o RH.");}
	
	else if (codigo == 3)
	{printf(" Seu departamento � o Estoque.");}
	

	else if (codigo == 4)
	{printf(" Seu departamento � o Contas a pagar.");}
	
	else if (codigo == 5)
	{printf(" Seu departamento � o Logistica.");}
	
	else {
		printf("Codigo invalido");
	}
}
