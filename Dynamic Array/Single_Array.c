#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,*ptr,i;
	int *temp;
	printf("Enter a value : ");
	scanf("%d",&n);
	ptr = (int*)malloc(sizeof(int) * n);
	temp = ptr;
	for(i = 0; i < n; i++)
	{
		printf("Enter %d value : ",i);
		scanf("%d",ptr);
		ptr++;
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ",*(temp + i));
	}
}
