#include <stdio.h>

void main()
{
	int n,i,j,temp;
	printf("Enter range : ");
	scanf("%d",&n);
	int ar[n];
	for(i = 0; i <n; i++)
		{
			printf("Enter a value : ");
			scanf("%d",&ar[i]);
		}
	for(i = 0; i < n - 1; i++)
		{
			for(j = 0; j < n-i-1; j++)
				{
					if(ar[j] > ar[j+1])
					{
						temp = ar[j];
						ar[j] = ar[j+1];
						ar[j+1] = temp;
					}
				}
		}
	for(i = 0; i < n; i++)
		printf("%d ",ar[i]);
}
