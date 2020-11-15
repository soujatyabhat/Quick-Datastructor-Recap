#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *top = NULL;

void push()
{
	int data;
	struct node *tmp;
	printf("Enter a data : ");
	scanf("%d",&data);
	tmp = (struct node*)malloc(sizeof(struct node));
	tmp->next = top;
	tmp->data = data;
	top = tmp;
	printf("Data has is inserted");
}

void pop()
{
	struct node *tmp;
	tmp = top;
	top = top->next;
	printf("\n %d is Deleted",tmp->data);
	free(tmp);
	
}

void display()
{
	struct node *tmp;
	tmp = top;
	
	if (top == NULL)
		{
			printf("\nStack is empty");
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
		printf("\n\nPress 1 to push\nPress 2 to Pop\nPress 3 to Display\nPress 4 to Exit\n\nEnter Your choose : ");
		scanf("%d",&ch);
		
		switch(ch)
			{
				case 1:
					 push();
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
