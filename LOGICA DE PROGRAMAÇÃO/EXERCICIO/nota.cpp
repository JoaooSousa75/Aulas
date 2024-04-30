#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float n1, n2,  m;
	 
	printf("Primeira nota: ");
	scanf("%f", &n1);
	printf("Segunda nota: ");
	scanf("%f", &n2);
	m = (n1+n2)/2;
	printf("Sua media é: %0.2f\n", m );
	
	if (m >=7)
	printf (" Aluno Aprovado");
		else if (m >= 5 && m <= 7)
		printf("Aluno em recuperação");
		else
		printf ("Aluno Reprovado");
	
	
	
	
	
	
	
	
	
  return 0;	
}
