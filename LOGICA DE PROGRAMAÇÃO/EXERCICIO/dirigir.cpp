#include <stdio.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	int ano,nasc,idade;
	
	printf("Em que ano estamos: ");
	scanf ("%i", &ano);
	printf("Em que ano vc nasceu: ");
	scanf ("%i", &nasc);
	idade = ano - nasc;
	
	if (idade<18)
	
	 printf("Você tem %i anos. Não Pode dirigir.\n", idade);
	
	else 
	
	printf("Você tem %i anos.  pode dirigir.\n", idade);
	
	
	
	
	
	return 0;
}
