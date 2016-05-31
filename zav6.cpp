#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

void print(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++) 
		printf("\n\tmas[%d] = %c", i, mas[i]);
}
int poisk(int *mas, int n, char x)
{
	int i, q = 0;
	   for(i = 0; i < n; i++)
	  	  if(mas[i] == x) {
			printf("mas[%d], ", i);
              q++;
		}	
	return q;	
}

int main()
{
	int mas[SIZE], i, q;
	char c;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++) {
		q = rand() % 57 + 65;
	     	if((q > 90) && (q < 97)) {
			    i--;
			continue;
		}	
		mas[i] = q;
	}	
	print(mas, SIZE);
	
	printf("\nVvedite bukvu: ");
	   scanf("%c", &c);
	printf("Vasha bukva est v takih masivah: ", c);
	   q = poisk(mas, SIZE, c);
	printf("\nVasha bukva v masive est %d raz.", q);
	system("PAUSE");
	return 0;
}
