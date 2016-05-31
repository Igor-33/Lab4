#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h> 

int poisk(int *mas, int n);

int poisk(int *mas, int n){
	int i, q=0;
	
	for(i = 0; i < 20; i++){
		if(mas[i] == n){
			printf("%d, ", i);
			  q++;
		}
	}
	return q;
}
int main(int argc, char *argv[]) {
	int mas[10];
	int i, n, q;
		
        srand(time(0));
		
       for (i = 0; i < 10; i++){
	     mas[i] = rand() % 100;
            printf("mas[%d] = %d\n", i, mas[i]);
	}
	
	printf("Vvedite chislo:");
	scanf("%d", &n);
	
	printf("Chislo est v takuh elementah:");
	q=poisk(mas, n);
	
	printf("\nChisel %d v masivi %d", n, q);
	
	 system("PAUSE");
	return 0;
}
