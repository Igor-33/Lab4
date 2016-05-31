#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 16

void pt_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++) 
		printf("mas[%2d] = %d\n", i, mas[i]);
}

int max_a(int *mas, int n)
{
	int i, a;
	int max = mas[0];
	
	for(i = 0; i < n; i++)
		if(mas[i] > max) {
			max = mas[i];
			   a = i;
		}	
	return a;	
}
int main()
{
	int mas[SIZE], i, a;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 100;
	
	      pt_mas(mas, SIZE);
	
	a = max_a(mas, SIZE);
	  printf("\nMax element: %d\n\n", mas[a]);
	
	for(i = a; i < (SIZE - 1); i++)
		mas[i] = mas[i + 1];
	
	      pt_mas(mas, SIZE - 1);
    system("PAUSE");
	return 0;	
}
