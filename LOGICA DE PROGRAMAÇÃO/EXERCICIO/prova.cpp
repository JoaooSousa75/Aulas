#include<stdio.h>
#include<stdlib.h>

int par(int);
int main (){
int num;
printf("Digite um número\n");
scanf("%d",&num);
printf("Números pares: %d\n", par(num));
system("pause");
return 0;
}
int par(int n){
int cont=0,i;
for(i=1;i<=n;i++){
if(i%2==0){
cont++;
}
}
return cont;
}
