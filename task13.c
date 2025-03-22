#include <stdio.h>

//kisate der

int main ()
{
	int num = 0;
	int newnumber = 0;
	
	printf("Write a number: ");
	scanf("%d", &num);	

	newnumber = num / 10;
	
		if (num % 10 == newnumber){
			printf("the number is a polindrome\n");
	
	        }else {
			printf("the number is not a polindrome\n");
	}

	return 0;
}
