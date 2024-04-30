#include <stdio.h>
#include <locale.h>


int main (){
	
	setlocale (LC_ALL,"Portuguese");
	
	int codigo;
	
	printf("Insira o Código do seu Departamento: ");
	scanf("%i", &codigo);


	if (codigo == 1)
		printf(" Seu departamento é o financeiro.");
		
	else if (codigo == 2)
	{printf(" Seu departamento é o RH.");}
	
	else if (codigo == 3)
	{printf(" Seu departamento é o Estoque.");}
	

	else if (codigo == 4)
	{printf(" Seu departamento é o Contas a pagar.");}
	
	else if (codigo == 5)
	{printf(" Seu departamento é o Logistica.");}
	
	else {
		printf("Codigo invalido");
	}
}
