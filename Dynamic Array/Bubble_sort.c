#include <stdio.h>
#include <stdlib.h>
void sort(int *ptr,int n)
{
	int i,j,temp;
	for (i = 0; i <n-1;i++)
	{
		for(j = 0; j <n-i-1; j++)
		{
			if (ptr[j]> ptr[j+1])
			{
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}	
	}	
}
void main()
{
	int n,i,temp;
	int *ptr;
	printf("Enter range : ");
	scanf("%d",&n);
	ptr = (int*)calloc(n,sizeof(int));
	for (i = 0; i < n; i++)
		{
			printf("Enter %d value : ",i);
			scanf("%d",&ptr[i]);	
		}
	system("cls");
	printf("After Swaping : \n");
	for(i = 0; i<n; i++)
	{
		printf("%d ",*(ptr+i));
	}
	sort(ptr,n);
	printf("\nBefore Swaping : \n");
	for(i = 0; i<n; i++)
	{
		printf("%d ",*(ptr+i));
	}
free(ptr);
}

