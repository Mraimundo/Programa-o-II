#include <stdio.h>
#include <stdlib.h>

int resultado (int tabuada, int multiplicador){
   int contador=0;
   int resfinal;
   while (contador<=10) {
      resfinal = tabuada * multiplicador;
      printf("\n%d vezes %d � igual a %d",tabuada,multiplicador,resfinal);
      contador++;
      return (resfinal);
   }
}
	main () {
   printf("\nDigite um n�mero para ver a sua tabuada: ");
   scanf("%d",&tabuada);
   if (tabuada==0) printf ("Que tal digitar um n�mero da pr�xima vez?");
   else resultado (tabuada);
   return 0;
   }

