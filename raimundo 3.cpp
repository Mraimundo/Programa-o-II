#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int multi (int a1, int a2){
	int resulta;
	resulta=a1*a2;
	return (resulta);
}

int main (){
	int y1, y2;
	int resultafi;
	printf("Digite o Primeiro Valor");
	scanf("%d", &y1);
	printf("Digite o Segundo Valor");
	scanf("%d", &y2);
	
	resultafi=multi(y1,y2);
	printf("O resultado da Multiplicação eh: %d", resultafi);
	getch ();
}
