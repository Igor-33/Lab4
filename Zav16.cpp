#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 20
int main()  {
   	int a[20], b[20], i,n;
	
    srand(time(0));
	
    for (i = 0; i < size; i++){
   	   a[i] = (rand() % 35);
          printf("mas[%d]=%d\n",i,a[i]);
   }
          printf("\t\n");
          
	for (i = 0; i < size; i++){
    	b[i] = (rand() % 35);
           printf("\t\tmas[%d]=%d\n",i,b[i]);
   }
           printf("\t\n");
           printf("Peresechenie masivov:\n");
   for(i = 0; i < size; i++)
   {
      for(n = 0; n < size; n++)
      {
         if(a[i] == b[n])
         {
            printf("mas[%d]=%d\n ",i,a[i]);
              break;
         }
      }
   }
    system("PAUSE");
    return EXIT_SUCCESS;
}
