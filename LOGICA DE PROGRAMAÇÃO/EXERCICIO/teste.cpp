#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float x1,x2,y1,y2,distancia;
	
	printf("X1: ");
	scanf("%f",&x1);
	printf("X2: ");
	scanf("%f",&x2);
	printf("X1: ");
	scanf("%f",&y1);
	printf("X1: ");
	scanf("%f",&y2);

	distancia = sqrt (pow(x2-x1,2)+pow(y2-y1,2));
	printf("%f",distancia);
}
