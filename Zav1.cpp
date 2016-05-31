#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int el(int*mas, int i);

int main() {
	int mas[15];
	int i;
	
	srand(time(0));
	
	for (i=0; i < 15; ){
		mas[i] = (rand() % 20);
		 if(el(mas, i))
		  i++;
	}
	  for (i=0; i < 15; i++){
		  printf("\t %d\n", mas[i]);
	}
	
	system("Pause");
	return 0;
}

int el(int*mas, int i){
	int h;
	 for (h=0; h < i; h++){
		if (mas[i] == mas[h])
		  return 0;
	}
	return 1;
}
