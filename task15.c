#include <stdio.h>

int main ()
{
	int num = 0;

	printf("Write a number: ");
	scanf("%d", &num);

	if (num == 2){
		printf("It's a simple digit\n");
	}
	for (int i = 2; i < num; ++i){
		if(num % i == 0){;
			printf("It's not a simple digit\n");
				return 0;
		}else{
			printf("It's a simple digit\n");
				return 0;
		}
	}
	return 0;

}
