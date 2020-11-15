#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(int a)
{
	if (top == MAX)
		printf("The stack is Overflowing");
	else
		{
			
			printf("New number is pushed\n");
			stack[++top] = a;
		}
}

void pop()
{
	if (top == -1)
		printf("The stack is Underflow");
	else
		printf("DATA : %d",stack[top--]);
}

void display()
{
	int i;
	if (top == -1)
		printf("No data has present in stack");
	else
		{
			for (i = 0; i < top; i++ )
					printf(" %d",stack[i]);	
		}
		printf("\n");
}

void main()
{
	int ch,number;
	while (1)
	{
		printf("\n\nPress 1 to push\nPress 2 to Pop\nPress 3 to Display\nPress 4 to Exit\n\nEnter Your choose : ");
		scanf("%d",&ch);
		
		switch(ch)
			{
				case 1:
					 printf("Enter any positive number : ");
					 scanf("%d",&number);
					 push(number);
					 break;
					  
				case 2:
					pop();
					break;
				
				case 3:
					display();
					break;
				
				case 4:
					 exit(1);
					 break;
					 
				default:
					printf("Given option is not available");
			}
	}
	
}
