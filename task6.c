#include <stdio.h>

int main ()
{
	char word;
	printf("Write a word and I will say is it vowel(dzaynavor) or consonant(baxadzayn): ");
	scanf("%c", &word);

	switch(word)
	{
		case('a'):
		printf("It's vowel word!\n");
		break;
		case('e'):
		printf("It's vowel word!\n");
		break;
		case('i'):
		printf("It's vowel word!\n");
		break;
		case('o'):
		printf("It's vowel word!\n");
		break;
		case('u'):
		printf("It's vowel word!\n");
		break;
		default:
		printf("Its consonant word!\n");
	}
	return 0;	
}
