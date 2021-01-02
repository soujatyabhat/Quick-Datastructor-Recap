#include <stdio.h>
void quicksort(int arr[],int first, int last)
{
	int p,q,pivot,swap,i;
	if (first < last)
	{
		p = first;
		q = last;
		pivot = p;

		while(p < q)
		{
			while(arr[p] <= arr[pivot] && p < q)
				p++;
			while(arr[q] > arr[pivot])
				q--;
			if(p < q){
				swap = arr[p];
				arr[p] = arr[q];
				arr[q] = swap;
			}
		}
	swap = arr[q];
	arr[q] = arr[pivot];
	arr[pivot] = swap;
	quicksort(arr,first,q - 1);
	quicksort(arr,q+1,last);
	}
	
	
}
void main()
{
	int i,n;
	printf("Enter a range : ");
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i <n; i++)	
		{
			printf("Enter %d value : ", i);
			scanf("%d",&arr[i]);
		}
		
	quicksort(arr,0,n-1);
	
	for(i = 0; i < n; i++)
		{
			printf("%d ",arr[i]);
		}
}
