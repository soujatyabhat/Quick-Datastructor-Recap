#include <stdio.h>
#include <stdlib.h>

struct node
	{
		int data;
		struct node *next;
	};

struct node *front = NULL;
struct node *rear = NULL;

void add()
{
	int data;
	struct node *tmp;
	printf("Enter a number : ");
	scanf("%d",&data);
	tmp = (struct node*)malloc(sizeof(struct node));
	if (rear == NULL)
		{
			
			front = tmp;
			tmp->data = data;
			tmp->next = rear;
			rear = tmp;
		}
	else
		{
			rear->next = tmp;
			tmp->data = data;
			tmp->next = front;
			rear = tmp;
		}
	printf("Data has inserted");
}

void display()
{
	struct node *tmp;
	if(rear == NULL)
		printf("List is empty");
	else
		{
			tmp = front;
			while(tmp->next != front)
				{
					printf("%d ",tmp->data);
					tmp = tmp->next;
				}
			printf("%d",rear->data);
		}
}

void del()
{
	struct node *tmp;
	if (front == NULL)
     		printf("List is empty");
	else
		{
			tmp = front;
			front = tmp->next;
			rear->next = front; 
			printf("%d is deleted",tmp->data);
			free (tmp);
		}
		
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n\nPress 1 to add\nPress 2 to display\nPress 3 to delete\nPress 4 to Exit\n\nEnter Your choose : ");
		scanf("%d",&ch);
		
		switch(ch)
			{
				case 1:
					add();
					break;
				case 2:
					display();
					break;
				case 3:
					del();
					break;
				case 4:
					exit(1);
					break;
				default:
					printf("Invalid Request");
			}
	}
}
