#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int verifica (int n1, int n2){
	
	int result;
	
	if(n1<n2)
		return n1;

	else 
		return n2;
	
}

int verifica_2 (int n1, int n2, int n3){
	
	int result;
	
	if(verifica(n1, n2) < n3){
		return verifica(n1, n2);
	}
	else
	return n3;
}
 	
 
int main(){
	int resultado, num, num2, num3;
	
	printf("Digite 3 numeros:\n");
	scanf("%d %d %d", &num, &num2, &num3);
	resultado=verifica_2(num, num2, num3);
	
	printf("O maior numero eh: %d", resultado);

}
