#include <stdio.h>
void main()
{
	int n,m,i,j;
	printf("Enter order NXM : ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	int *ptr = &arr[0][0];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("Enter %dx%d : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("%d ",*(ptr + i * m + j));
		}
		printf("\n");
	}
}
