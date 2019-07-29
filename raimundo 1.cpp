#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int soma (int a1, int a2){
	int resul;
	resul=a1+a2;
	return (resul);
}

int main (){
	int n1, n2;
	int resulfi;
	printf("Digite o Primeiro Valor:\n");
	scanf("%d", &n1);
	printf("Digite o Segundo Valor:\n");
	scanf("%d", &n2);
	
	resulfi=soma(n1,n2);
	printf("O resultado da soma eh: %d", resulfi);
	getch ();
}
