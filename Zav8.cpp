#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void MAX_(float *mas, int n)
{
	int i;
	for(i = 0; i < SIZE; i++) 
		printf("\n\t[%d] = %.2lf", i, mas[i]);
}

float max_znach(float *mas, int n)
{
	int i;
	float max = 0;	
	    for(i = 0; i < n; i++)
		  if(mas[i] > max)
			max = mas[i];
		
	return max;	
}
int main()
{
	float mas[SIZE], x=0, max;
	int i;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = ((float)rand() / RAND_MAX) * 10;
	
	MAX_(mas, SIZE);
	max = max_znach(mas, SIZE);
	
	printf("\n\tMAX: %.2lf", max);
       for(i = 0; i < SIZE; i++) {
		  if(max == mas[i])
			x++;
	}
	printf("\nTakih elementov: %d", x);
	system("pause");
	return 0;
}

