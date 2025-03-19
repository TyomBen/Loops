#include <stdio.h>

int main ()
{
	int i = 0;
	while (i <= 100){
	if(i == 0){
	++i;
	}else{
	printf("%d\n", i);
	i+=2;
	}
	}
	return 0;
}
