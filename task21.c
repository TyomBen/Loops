#include <stdio.h>
//minjev verj arvac che

int main ()
{
	int n = 10;
	int othernum = 0;
	printf("%d\n", 1);
	for (int i = 1; i <= n; i++){
		for (int g = 0; g < i; ++g){
			printf("%d%d", othernum, othernum + 1);
		}
			printf("\n");
	}
	return 0;
}
