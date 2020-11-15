#include <stdio.h>
void main()
{
	int n,i,j,rec;
	printf("Enter range : ");
	scanf("%d",&n);
	
	int ar[n];
	for(i = 0; i < n; i++)
	{
		printf("Enter %d value : ",i+1);
		scanf("%d",&rec);
		
		j = i - 1;
		while(rec < ar[j] && j >= 0)
			{
				ar[j+1] = ar[j];
				j--;
			}
		ar[j+1] = rec;
	}
	for(i = 0; i < n;i++)
		printf("%d ",ar[i]);
}
