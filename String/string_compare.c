#include <stdio.h>
#include <string.h>
void main()
{
	char string1[10];
	char string2[10];
	int i,flag = 1;
	printf("String 1 : ");
	gets(string1);
	printf("String 2 : ");
	gets(string2);
	
// Manual Way
//	if(strlen(string1) == strlen(string2))
//	{
//		for (i = 0; i < strlen(string1); i++)
//		{
//			if (string1[i] != string2[i])
//				{
//					flag = 0;
//					break;
//				}		
//		}
//	}	
//if(flag == 1)
//	printf("Same :)");
//else
//	printf("Different :(");

// Library function Way
if(strcmp(string1,string2) == 0)
	printf("Same :)");
else
	printf("Different :(");
}
