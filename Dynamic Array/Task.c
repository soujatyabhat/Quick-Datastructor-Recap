#include <stdio.h>
#include <stdlib.h>
void main()
{
	int r,c,i,j,temp,max,k=0;
	int range = 0;
	int mul = 1;
	
	printf("Enter order of matrics: ");
	scanf("%d %d",&r,&c);
	
	
	int *arr = (int*)calloc(sizeof(int),r+c); //2D Array Structure //
	int *mul_arr = (int*)calloc(sizeof(int),r); // Store mulplication result in dma array //
	
	// Take values from console
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter %dX%d value : ",i,j);
			scanf("%d",&temp);
			*(arr + i * c + j) = temp;
		}
		printf("\n");
	}
	
	// Find the multiplication among each number in each row
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			mul *= *(arr + range++);
		}
		mul_arr[k++] = mul;
		mul = 1;
	} 
	
	// Find maximum one from bunch of values
	max = mul_arr[0];
	for (i = 0; i < k; i++)
	{
		if (max < mul_arr[i])
			max = mul_arr[i];
	} 
	printf("The Max mul is : %d",max);
	
	//Free allocated memories
	free(mul_arr);
	free(arr);
}
