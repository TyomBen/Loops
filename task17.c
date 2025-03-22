#include <stdio.h>

int main ()
{
	int n = 0;

	printf("Write a number: ");	
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i){
		for (int s = 0; s < i; ++s){
			printf("%d",i);
		}
			printf("\n");
	}
	return 0;
}
