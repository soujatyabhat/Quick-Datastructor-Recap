#include <stdio.h>
void main()
{
	int n,*ptr;
	printf("Enter a value : ");
	scanf("%d",&n);
	ptr = &n;
	printf("Direct value : %d\n",n);
	printf("Display using pointer : %d\n",*ptr);
}
