#include<stdio.h>
#include<locale.h>
#include <math.h>

int main (){
    setlocale (LC_ALL,"PORTUGUESE");
    
    float n1, n2 , media;
    
    printf ("digite a n1: ");
    scanf("%f", n1);
    printf ("\ndigite a n2: ");
    scanf("%f", n2);
    media = (n1+n2)/2;
    
    printf ("Sua média é: %f   \n", media);
    
    
    if (media <= 1000 && media >= 9 ) {
		printf("Nota A");}
    
    	else if
    		(media < 9 && media >= 8 );
    		printf("Nota A");
    			
    			else if
    				(media < 8 && media >= 7 );
    				printf("Nota A");
    		
    		
    		
    		
    		
}
    
    
return 0;}
