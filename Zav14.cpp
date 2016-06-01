#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

int pt_mas(int *mas, int n)
{
	int i;
	  for(i = 0; i < n; i++) 
		printf("\n\tmas[%d] = %d\n", i, mas[i]);
}
int max_q(int *mas, int n, int q_z)
{
	int i, q = q_z;
	int max = mas[q_z];
	
	if(q_z == n)
		return q_z;
	for(i = q_z; i < n; i++)
		if(mas[i] > max) {
			max = mas[i];
		    	q = i;
		}	
	return q;	
}
int vporyd(int *mas, int n)
{
	int i, m, q;
	for(i = 0; i < n; i++) {
		m = mas[i];
		q = max_q(mas, size, i);
		mas[i] = mas[q];
		mas[q] = m;
	}
}
int main()
{
	int mas[size + 10], i, n, m, f=0;
	
	srand(time(0));
	
	for(i = 0; i < size; i++)
		mas[i] = rand() % 30;
	
	vporyd(mas, size);
	   pt_mas(mas, size);
         	printf("\n\n N: ");
	             scanf("%d", &n);
	             
	for(i = (size - 1), mas[size + 1] = 0; i >= 0; i--) {
		if(n >= mas[i])
			mas[i + 1] = mas[i];
	else {
			mas[i + 1] = n;
			   f = 1;
		       	  break;
		 }	
      }	
	if(f == 0)
		mas[0] = n;
	        pt_mas(mas, (size + 1));
    system("PAUSE");
    return 0;
}

