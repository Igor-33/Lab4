#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int mas[20], par=0, i;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i] = (rand() % 10);
		  printf("\t%d\n", mas[i]);
	}
	    for(i = 0; i < 8; i++){
		   if(mas[i]==mas[i+1])
		       par++;
	}
   printf("\nNaideno %d par odnakovih elementov.\n", par);

	system("pause");
	return 0;
}
    
