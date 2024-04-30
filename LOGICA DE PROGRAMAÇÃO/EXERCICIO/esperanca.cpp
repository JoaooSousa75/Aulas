#include<stdio.h>
#include<locale.h>
#include <math.h>

int main (){
    setlocale (LC_ALL,"PORTUGUESE");
    
    int D;
    float valor;
    
    printf("-----------------------------------\n");
    printf("          CRIANCA ESPERANÇA        \n");
    printf("-----------------------------------\n");
    printf("Muito obrigado por ajudar\n");
    printf("\n[1] para doar R$10\n");
    printf("[2] para doar R$25\n");
    printf("[3] para doar R$50\n");
    printf("[4] para outros vlaores\n");
    printf("[5] para cancelar\n");
    scanf ("%i", &D);
    
    switch (D) {
	
    	case 1 :
    		valor = 10;
    		break;
    	
    	case 2 :
    		valor = 25;
    		break;
    		
    	case 3 :
    		valor = 50;
    		break;
    		
    	case 4 :
			printf("Qual o valor da doação? R$ \n");	
			scanf("\n %f", &valor);
			break;
			
    	case 5 :
    		valor = 0;
    		break;
    	}
       
       printf("-----------------------------------\n");
       printf("Sua doação foi de %0.2f ", valor);
       printf("\nMuito obg\n");
       printf("-----------------------------------");

    
    
    return 0;
}
