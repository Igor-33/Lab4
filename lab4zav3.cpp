#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   int main()
  {
    int mas[100], i;
    int Kilkist=0;
    int proizvodna=1;
    
        srand(time(NULL));
        for (i = 0; i < 10; i++)
    {
        mas[i] = rand() % 10 - 5;
        printf("\nmas[%d] = %d", i, mas[i]); 
    }
         
        for (i = 0; i < 10; i++)
    {
        if(((i % 2) == 0) && (mas[i] > 0)){
			proizvodna *= mas[i];
            Kilkist = Kilkist+1;
     }
    }
         printf("\nproizvodna = %d", proizvodna);	
	     printf("\nKilkist: %d\n", Kilkist);
 
         system("pause");
         return 0;
    }


