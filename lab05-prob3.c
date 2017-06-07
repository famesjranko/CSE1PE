#include <stdio.h>
#include <string.h)


int main()
{
	char string[100], string2[100];
	int i, j, vowels = 0;

	printf("Please input a word to count how many vowels it contains: ");
	scanf("%s", string);

	for (i=0; string[i]!='\0'; ++i)
	{
		string2[i] = tolower(string[i]);
	}

	for (j=0; string2[j]!='\0'; ++j)
	{	
		if (string2[j]=='a' || string2[j]=='e' || string2[j]=='i' || string2[j]=='o' || string2[j]=='u')
			++vowels;
	}

	printf("\"%s\" has %d vowels.", string, vowels);
	
	return 0;
	
}