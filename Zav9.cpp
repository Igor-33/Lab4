#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int max_rand(int *mas);

int main() {
	int mas[10], i, max, zminyem, N;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++){
		mas[i] = rand() % 100;
		  printf("mas[%d] = %d\n", i, mas[i]);
    }
	N = max_rand(mas);
	 zminyem = mas[0];
	   mas[0] = mas[N]; 
	     mas[N] = zminyem;
	
	for(i = 0; i < SIZE; i++){
		printf("\tmas[%d] = %d\n", i, mas[i]);
	}
	system("PAUSE");
	return 0;
}
int max_rand(int *mas){
	int i, maxelement = 0, max; 
    	max = mas[0];
	
	for(i = 0; i < SIZE; i++){
		if(mas[i] >= max){
			max = mas[i];
			  maxelement = i;
		}	
	}
	return maxelement;
}
    
