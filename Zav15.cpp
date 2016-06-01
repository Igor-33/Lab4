#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main(){
	int first[10], second[10], i;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		first[i] = (rand() % 50);
		   printf("\t%d\n", first[i]);
	}
	for(i = 0; i < 10; i++){
      second[i] = first[10-(i+1)];
	}
        printf("\nMassiv v obratnom porydke:\n");
   
	for(i = 0; i < 10; i++)
		printf("\t\t%d\n", second[i]);
	system("Pause");
	return 0;
}
