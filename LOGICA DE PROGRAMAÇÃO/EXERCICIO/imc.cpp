#include<stdio.h>
#include<locale.h>
#include <math.h>

int main (){
    setlocale (LC_ALL,"PORTUGUESE");

    float m, a, imc;

    printf("Qual a sua massa (KG): ");
    scanf("%f", &m);
    printf("Qual a sua altura (M): ");
    scanf("%f", &a);

    imc = m / (a * a);
	printf("IMC: %0.2f \n", imc);
 
 	if (imc < 17)
 		printf("Muito abaixo do peso");
 		
 		else if (imc>= 17 && imc< 18.5)
			printf("Abaixo do peso");
		
			else if (imc>= 18.5 && imc<25)
				printf("Peso Ideal");
		
					else if (imc>= 25 && imc <30)
						printf("Sobre peso");
		
							else if (imc>=30 && imc<35)
								printf("Obedidade");
								
									else if (imc>=35 && imc<40)
										printf("Obesidade severa");
										
												else 
												printf("obsidade morbida");



 return 0;
}


