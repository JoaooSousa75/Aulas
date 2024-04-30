#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float Fe, C;
	
	printf("Qual a temperatura vc esta vendo em F: ");
	scanf("%f", &Fe);
	C=(Fe-32)/1.8;
	
	printf("A temperatura em Celsius é: %0.2f", C );
	
   return 0;	
}
