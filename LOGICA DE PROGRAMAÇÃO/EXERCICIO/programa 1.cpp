#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float real, dolar;
 
	
	printf("Quanto vc tem em reais: ");
	scanf("%f", &real);
	dolar = real/5;
	
	printf("Vc tem U$ %0.2f ", dolar );
	
	
	
	
	
	return 0;
}
