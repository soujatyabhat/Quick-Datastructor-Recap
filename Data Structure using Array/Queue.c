#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int rear = -1;
int front = -1;
int queue[MAX];

void add()
{
	int a;
	printf("Enter value : ");
	scanf("%d",&a);
	if (rear == MAX - 1)
		printf("Queue is overflow");
	else
		queue[++rear] = a;	
}

void del()
{
	if(front == rear)
			printf("Queue is overflow");
	else
		{
			printf("%d is deleted",queue[++front]);
		}
}

void display()
{
	int i;
	
	if(rear == -1)
		printf("Queue is empty");
	else
		{
			for(i = front+1; i <= rear; i++)
					printf("%d ",queue[i]);	
		}
		
}

void main()
{
	int ch,number;
	while (1)
	{
		printf("\n\nPress 1 to insert\nPress 2 to delete\nPress 3 to Display\nPress 4 to Exit\n\nEnter Your choose : ");
		scanf("%d",&ch);
		
		switch(ch)
			{
				case 1:
					 add();
					 break;
					  
				case 2:
					del();
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
