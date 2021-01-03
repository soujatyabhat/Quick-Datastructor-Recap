#include <stdio.h>
#include <stdlib.h>
void main()
{
	int r,c,i,j,temp;
	printf("Enter order : ");
	scanf("%d %d",&r,&c);
	int *arr = (int*)calloc(sizeof(int),r+c);
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter %dX%d value : ",i,j);
			scanf("%d",&temp);
			*(arr + i * c + j) = temp;
		}
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ",*(arr + i * c + j));
		}
		printf("\n");
	} 
}
