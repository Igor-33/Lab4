#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mas[10], m = 0, i, j;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i] = rand() % 100;
		    printf("%d ", mas[i]);
	}
	for(i = 0; i < 10-1; i++){
		for(j = i + 1; j < 10; j++){
			if(mas[i] == mas[j]) 
		       m++;
		}
	}
	if(m > 0) 
	  printf("\nEst %d par\n", m);
	    else 
	      printf("\nNet par\n");
   system("pause");
   return 0;
}
