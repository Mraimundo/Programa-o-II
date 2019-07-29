#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int fatorial (int n){
	int fat;
	for(fat=1; n>1; n=n-1)
	fat=fat*n;
	return (fat);
}

int main (){
	int n;
	int fato;
	printf("Digite o Numero:\n");
	scanf("%d", &n);
	
	fato=fatorial(n);
	printf("O resultado da Fatorial eh: %d", fato);
	getch ();
	
}
