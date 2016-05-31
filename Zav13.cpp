#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bubble(int* mas);
int q(int*mas, int i);

  int main() {    
  int mas[10], i, k;
    
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i]=rand() % 100;
		  if(q(mas, i))
             printf("%d \n", mas[i]);
           }  
	bubble(mas);

	 printf("\nRosstanovka:\n\n");
	
   for(i = 0; i < 10; i++)
      printf("%d \n", mas[i]);

	       system("pause");
           return 0;
}
   int bubble(int* mas){
	int m, i, k;
	  for (i = 10 -1; i >= 0; i--){
		for (k = 0; k < i; k++){
			if (mas[k] > mas[k+1]){
				int m = mas[k];
				  mas[k] = mas[k+1];
				    mas[k+1] = m;
			   }
	    	}
    	} 
     }

int q(int*mas, int i){
	int r;
	for (r=0; r < i; r++){
		if (mas[i] == mas[r])
		return 0;
	}
	return 1;
}
	
