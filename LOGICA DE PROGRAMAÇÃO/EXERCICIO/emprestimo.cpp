#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float emp, aum, par;
	
	printf("Qual é o valor do emprestimo: ");
	scanf("%f", &emp);
	aum = emp * 0.2;
	
	printf("Nosso emprestismo tem o juros de 20%, quantas parcelas vc deseja fazer: ");
	scanf("%f", &par);

    printf("Vc irá pagar %0.0f parcelas de R$ %0.2f, que seria um total de %0.2f", par, (emp + aum )/ par,emp + aum );
    







return 0;
}


