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
 	
 
int main(){
	int resultado, num, num2;
	
	printf("Digite dois numeros:\n");
	scanf("%d %d", &num, &num2);
	resultado=verifica(num, num2);
	
	printf("O menor numero eh: %d", resultado);

}
