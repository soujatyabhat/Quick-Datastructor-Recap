#include <stdio.h>
#include <string.h>
void main()
{
	char string1[10];
	char rev[10];
	int rev_c = 0,i;
	printf("Enter a string :");
	gets(string1);
	
	//String reverse logic
	for(i = strlen(string1) - 1; i >= 0 ; i--)
	{
		rev[rev_c++] = string1[i];
	}
	
	//String Compare Logic
	if(strcmp(rev,string1) == 0)
		printf("I am Palindrome :)");
	else
		printf("I am not Palindrome :(");
}
