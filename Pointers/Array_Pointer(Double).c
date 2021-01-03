#include <stdio.h>
void main()
{
	int n,m,i,j;
	printf("Enter NxM : ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	int *ptr = &arr[0][0]; 
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("Enter %dx%d value : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for (i = 0; i < n * m; i++)
	{
			printf("%d ",*(ptr + i));
	}
}
