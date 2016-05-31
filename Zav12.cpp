#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vybor(int* mas);
int znach(int*mas, int i);

int main() {
	int mas[10], i;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i] = rand() % 100;
		   if(znach(mas, i))
		      printf("\t%d\n", mas[i]);
	}
	     vybor(mas);
   
	printf("\nRostanovka metodom pryamogo vibora: \n");
	  for(i = 0; i < 10; i++)
	    printf("%d ", mas[i]);   
	      system("PAUSE");
	         return 0;
}

int vybor(int* mas){
	int i, f, lm, m, j;
		for(i = 0; i < 10-1; i++){
		 f = 0;
		  lm = i;
		    m = mas[i];
		for(j = i + 1; j < 10; j++){
			if(mas[j] < m ){
				m = mas[j];
				  lm = j;
				    f = 1;
			}
		}
		if(f){
			mas[lm] = mas[i];
			  mas[i] = m ;
		}
     }
  }

int znach(int*mas, int i){
	int h;
	for (h=0; h < i; h++){
		if (mas[i] == mas[h])
		return 0;
	}
	return 1;
}
