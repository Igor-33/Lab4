#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   int main()
  {
    int mas[10], i;
    int Kilkist=0;
    int suma=0;
    
        srand(time(NULL));
        for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % 10 - 5;
        printf("\nmas[%d] = %d", i, mas[i]); 
    }
         
        for (int i = 0; i < 10; i++)
    {
        if(((mas[i] % 2) == 0) && (mas[i] > 0)){
			suma += mas[i];
            Kilkist++;
     }
    }
         printf("\nSuma = %d", suma);	
	     printf("\nKilkist: %d", Kilkist);
 
         system("pause");
         return 0;
    }

