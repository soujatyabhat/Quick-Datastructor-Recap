#include <stdio.h>
#include <string.h>
void main()
{
	char string[10];
	int i,vowel = 0;
	printf("Enter string : ");
	gets(string);
	for(i = 0; string[i]!='\0'; i++)
	{
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || 
		string[i] == 'o' || string[i] == 'u')
		{
			vowel++;
		}
	}
	printf("Number of vowel is : %d",vowel);
}
