#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float compras, imposto;
	
	printf("Qual o valor da compra? ");
	scanf("%f", &compras);
	imposto = (compras*60)/100;
	
	printf("O valor do imposto é %0.2f", imposto);
	
	
	
	
return 0;	
}
