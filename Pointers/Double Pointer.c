#include <stdio.h>
void main()
{
	int n;
	int *ptr1,**ptr2;
	printf("Enter a value : ");
	scanf("%d",&n);
	ptr1 = &n;
	ptr2 = &ptr1;
	system("cls");
	printf("Display value using single pointer: %d\n",*ptr1);
	printf("Display value using double pointer : %d\n",**ptr2);
	printf("Address of variable that pointer one holds: %x\n\n",ptr1);
	printf("Address of pointer that pointer two holds: %x\n",ptr2);
}
