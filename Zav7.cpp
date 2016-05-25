#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3
int main() {
	int first[10], second[10], i, proizvodna = 0;
	
      	srand(time(0));
	
	for (i = 0; i < SIZE; i++){
		first[i] = rand() % 5;
		second[i] = rand() % 5;
		printf("\tpers[%d] = %d", i, first[i]);
		printf("\tdryg[%d] = %d\n", i, second[i]);
	}
	
	for(i = 0; i < SIZE; i++){
		proizvodna += (first[i]*second[i]);
	}
	printf("proizvodna = %d\n", proizvodna);
	system("pause");
	return 0;
}
