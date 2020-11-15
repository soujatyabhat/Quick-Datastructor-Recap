#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *rear = NULL;
struct node *front = NULL;

void insert()
{
	int data;
	struct node *tmp;
	printf("Enter a data : ");
	scanf("%d",&data);
	tmp = (struct node*)malloc(sizeof(struct node));
	if( rear == NULL)
		{
			tmp->data = data;
			tmp->next = NULL;
			front = tmp;
			rear = tmp;	
		}
	else
		{
			rear->next = tmp;
			rear = tmp;
			tmp->data = data;
			tmp->next = NULL;
		}
	printf("Data has is inserted");
}


void del()
{
	struct node *tmp;
	if(front == NULL)
			printf("Data is underflow");
	else
		{
			tmp = front;
			front = tmp->next;
			printf("%d is Deleted",tmp->data);
			free(tmp);
		}
}

void display()
{
	struct node *tmp;
	tmp = front;
	
	if (front == NULL)
		{
			printf("\nQueue is empty");
		}
	else
	{
		while(tmp != NULL)
		{
			printf("%d ",tmp->data);
			tmp = tmp->next;
		}
	}
}

void main()
{
	int ch;
	while (1)
	{
		printf("\n\nPress 1 to insert\nPress 2 to delete\nPress 3 to display\nPress 4 to Exit\n\nEnter Your choose : ");
		scanf("%d",&ch);
		
		switch(ch)
			{
				case 1:
					 insert();
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
