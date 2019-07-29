#include <stdio.h>
#include <stdlib.h>

int resultado (int tabuada, int multiplicador){
   int contador=0;
   int resfinal;
   while (contador<=10) {
      resfinal = tabuada * multiplicador;
      printf("\n%d vezes %d é igual a %d",tabuada,multiplicador,resfinal);
      contador++;
      return (resfinal);
   }
}
	main () {
   printf("\nDigite um número para ver a sua tabuada: ");
   scanf("%d",&tabuada);
   if (tabuada==0) printf ("Que tal digitar um número da próxima vez?");
   else resultado (tabuada);
   return 0;
   }

