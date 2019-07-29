#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void sorteio (){
	
	int i, num;
	
	printf("Sorteio de 1 a 6\n\n");
	
	for(i=1; i<10; i++){
		printf("%d \n", rand() % 100);
	}
	
}



int main(){
	
	sorteio();
}
