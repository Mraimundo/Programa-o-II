#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int multiplicar (int m1, int m2){
	int mult;
	mult=m1*m2;
	return mult;
}

int main (){
	int a, b, resul;
	printf("Digite o Primeiro Numero\n:");
	scanf("%d", &a);
	printf("Digite o Segundo Numero\n:");
	scanf("%d", &b);
	
	resul=multiplicar(a ,  b);
	printf("O resultado da multiplicação eh: %d\n", resul);
	
	return 0;
}
