#include <stdio.h>

int main ()
{
	 int n = 0;
 
	 printf("Write a number: ");
 	 scanf("%d", &n);

	for (int i = 1; i<= n * n; ++i){
		printf("%c", '*');
		if(i % n == 0){
			printf("\n");
		}
	}
	return 0;
}
