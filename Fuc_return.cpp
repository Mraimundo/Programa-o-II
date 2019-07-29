#include<stdio.h>

int square(int a)
{
	return (a*a);	
}

int main(){
	int num;
	printf("Diginte o seu Valor:\n");
	scanf("%d", &num);
	num= square(num);
	printf("\n\n O seu Quadrado vale: %d", num);
	return 0;
}
