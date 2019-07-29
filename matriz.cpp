#include<stdio.h>

void carregaVetor(int v[][9], int l, int c);
void   exibeVetor(int v[][9], int l, int c);
void exibe2(int v[], int l, int c);

int main(int argc, char *argv[])
{
	int v[9][9], l,c;
	printf("Digite a qtde linhas");
	scanf("%d",&l);
	printf("\nDigite a qtde colunas");
	scanf("%d",&c);
	printf("\n\n");
	carregaVetor(v,l,c);
	printf("\n\n");
	exibeVetor(v,l,c);
	printf("\n\n");
	exibe2(&v[0][0],l,c);

	return 0;
	
}


void carregaVetor(int v[][9], int l, int c)
{
	int x,y;
	for(x=0; x<l; x++)
	{
		for(y=0; y<c; y++)
		{
			printf("\nDigite o elemento V[%d][%d]: ",x,y);
	        scanf("%d",&v[x][y]);
		}
		
	}
	printf("\n");
}


void exibeVetor(int v[][9], int l, int c)
{
	int x,y;
	for(x=0; x<l; x++)
	{
		for(y=0; y<c; y++)
		{
			printf("%d ",v[x][y]); 
		}
	    printf("\n");
	}
    printf("\n");
}


void exibe2(int v[], int l, int c)
{
	int x,y;
	for(x=0; x<l; x++)
	{
		for(y=0; y<c; y++)
		{
			printf("%d ",v[x*c+y]); 
		}
	    printf("\n");
	}
    printf("\n");
}

