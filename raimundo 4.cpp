#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

float divisao (float a1, float a2){
	int retultad;
	retultad=a1/a2;
	return (retultad);
}

int main (){
	float x1, x2;
	float final;
	printf("Digite o Primeiro Valor:\n");
	scanf("%s", &x1);
	printf("Digite o Segundo Valor:\n");
	scanf("%s", &x2);
	
	final=divisao(x1,x2);
	printf("O resultado da Divisaõ eh: %s", final);
	getch ();
}
