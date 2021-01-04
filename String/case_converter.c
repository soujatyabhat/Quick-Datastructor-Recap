#include <stdio.h>
#include <string.h>
void main()
{
	char name[10];
	char convert_case[10];
	int i,con_c = 0;
	printf("Enter a string : ");
	gets(name);
	for(i = 0; name[i]!= '\0'; i++)
	{
		if(name[i] >= 'a' && name[i] <= 'z')
			convert_case[con_c++] = name[i] - 32;
		else if (name[i] >= 'A' && name[i] <= 'Z')
			convert_case[con_c++] = name[i] + 32;
	}
	printf("%s",convert_case);
}
