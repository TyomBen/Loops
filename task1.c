#include <stdio.h>

int main ()
{
	int a = 0;
	while (a <= 10){
	printf("while loop: %d\n", a);
	++a;
	}
	
	int num = 0;
	do{
	printf("do while loop: %d\n", num);
	++num;
	}while (num <= 10);
	
	for (int i = 0; i<=10; ++i){
	printf("for loop: %d\n", i);
	}	
	return 0;
}
	
