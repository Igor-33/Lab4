#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   int main()
  {
    int mas[10], i;
    int Kilkistplus=0;
      int Kilkistminus=0;
        srand(time(NULL));
        for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % 10 - 5;
        printf("\nmas[%d] = %d", i, mas[i]); 
    }
         
        for (int i = 0; i < 10; i++)
    {
        if(mas[i] >= 0) {
            Kilkistplus++;
     }
          else {
               Kilkistminus++;
               }            
    }
         printf("\nKilkist(+): %d", Kilkistplus);	
	     printf("\nKilkist(-): %d", Kilkistminus);
 
         system("pause");
         return 0;
    }

