#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 0;

	printf("Write first number: ");
	scanf("%d", &a);
	printf("Write second number: ");
	scanf("%d", &b);
	
	if (a < b){
	for (int i = a; i <= b; ++i){
	if(i % 5 == 0){
	printf("%d\n", i);
	}
	}
	}else {
	printf("The first number must be less than second\n");
	/* or to do oposit loop, for example int i = b; i <= a; ++a...*/
}
	return 0;
}
