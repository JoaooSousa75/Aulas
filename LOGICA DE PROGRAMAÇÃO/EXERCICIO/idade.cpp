#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int ano, nasc, idade;
	
	printf("Em que ano estamos? ");
	scanf ("%i", &ano);
	
	printf("Em que ano vc nasceu? ");
	scanf ("%i", &nasc);
	idade = ano - nasc;
	
	
	printf ("Em %i vc tera %i anos \n", ano, idade);
	
	if (idade>=21)
	
	printf("Vc vai ser maior de idade");
	
	else
	
	printf ("Vc não é maior de idade");
return 0;	
}
