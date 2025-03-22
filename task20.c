#include <stdio.h>

int main ()
{
	int num = 0;
	int othernum = 0;

	printf("Write a number: ");
	scanf("%d", &num); 	
	for (int i = 1; i <= num; ++i){
		for (int s = 0; s < i && ++othernum; ++s){
			if (othernum > num){
				return 0;
			}else {
				printf("%d", othernum);
			}
		}
		printf("\n");
	}
	return 0;
}
