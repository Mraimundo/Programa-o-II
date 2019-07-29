#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int subtracao (int a1, int a2){
	int result;
	result=a1-a2;
	return (result);
}

int main (){
	int m1, m2;
	int valor;
	
	printf("Digite o primeiro Valor:\n");
	scanf("%d", &m1);
	printf("Digite o Segundo Valor:\n");
	scanf("%d", &m2);
	
	valor=subtracao(m1,m2);
	printf("O valor da subtração eh: %d", valor);
	getch ();
}
