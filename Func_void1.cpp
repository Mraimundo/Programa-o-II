#include<stdio.h>
#include<stdlib.h>

int soma_mais_um(int n)
{
	n=n+1;
	printf("Dentro da Fun�ao o valor: x= %d \n\n", n);
}

int main()
{
	int x=5;
	printf("Antes da Fun�ao o VAlor: x= %d \n\n", x);
	soma_mais_um(x);
	printf("Depois da fun�ao o Valor: x= %d \n\n", x);
	system("pause");
	return 0;
}
