#include <stdio.h>

int main ()
{
	int num = 0;
	
	printf("Write a number and I will show you interesting thing :)");
	scanf("%d", &num);

	for (int i = 1; i <= 9; i++){
		printf("%d\n", num * i); 
	}
	return 0;
}
