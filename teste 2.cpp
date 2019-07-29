#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



int main (int argc, char *argv[])
{
int numero, resposta;
int contador=0;

do
{
		system ("cls");
		printf("Tabuada\n\n");
		printf("Digite o numero da tabuada: ");
		scanf("%d",numero);
		for(contador=0;contador<=9;contador++)
{
	printf("%d x %d = %d\n",contador,numero,contador*numero);	
}
printf("n1- Novo Calculo\n");
printf("2- Sair\n");
printf("Digite a opção que deseja:");
scanf("%d", &resposta);
}while(resposta != 2);
	system("pause");
	
}

