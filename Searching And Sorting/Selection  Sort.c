#include <stdio.h>
void main()
{
  int i,j,n,min,pos;
  printf("Enter range : ");
  scanf("%d",&n);
  
  int arr[n];
  printf("enter value: ");
  for(i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
    
  for(i = 0; i < n; i++)
    {
      pos = i;
      min = arr[i];
      for(j = i + 1; j < n; j++)
        {
          if(arr[j] < min)
            {
              pos = j;
            }
        min = arr[pos];
        arr[pos] = arr[i];
        arr[i] = min;
    }
   } 
   printf("shorted array is=");
    for(i = 0; i < n; i++)
      printf("%d ",arr[i]);
}
