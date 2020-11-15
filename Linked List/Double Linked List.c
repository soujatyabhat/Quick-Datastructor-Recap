#include <stdio.h>
#include <stdlib.h>

struct node {
	int a;
	struct node *next;
	struct node *prev;
};

struct node *top = NULL;

void addFirst(int a)
{
	struct node *data;
	data = (struct node*)malloc(sizeof(struct node));
	data->a = a;
	data->next = top;
	data->prev = NULL;
	top = data;
}

void delFirst()
{
	struct node *tmp;
	if(top == NULL)
		{
			printf("List is empty\n\n");
		}
	else
		{
			tmp = top;
			if(tmp->next == NULL)
				{
					top = NULL;
					printf("%d is Deleted\n\n",tmp->a);
					free(tmp);
				}
			else
				{
					top = tmp->next;
					top->prev = NULL;
					printf("%d is Deleted\n\n",tmp->a);
					free (tmp);
				}
		}
}

void addLast()
{
	struct node *tmp = top;
	struct node *back,*data;
	if(top == NULL)
		printf("Insert failur");
	else
		{
			while(tmp->next != NULL)
				{
					tmp = tmp->next;
				}
			int n;
			printf("Enter a value : ");
			scanf("%d",&n);
			data = (struct node*)malloc(sizeof(struct node));
			data->a = n;
			data->prev = tmp;
			data->next = NULL;
			tmp->next = data;
		}	
}

void delLast()
{
	struct node *tmp,*tmp1;
	tmp = top;
	if(top == NULL)
		printf("List is empty");
		
	else if(tmp->next == NULL)
		{
			top = NULL;
			printf("%d is Deleted\n\n",tmp->a);
			free(tmp);	
		}
	else
		{
			while(tmp->next != NULL)
			{
				tmp1 = tmp;
				tmp = tmp->next;
			}
			tmp1->next = NULL;
			printf("%d is Deleted\n\n",tmp->a);
			free(tmp);
		}
}

void display()
{
	struct node *tmp;
	printf("All values : \n");
	for(tmp = top; tmp != NULL; tmp = tmp->next)
	{
		printf("%d ",tmp->a);
	}
	printf("\n\n");
}

void main()
{
	int ch,n;
	while (1)
	{
		printf("Enter 1 to add , 2 to display , 3 to delete to , 4 to add last , 5 to delete last node, 6 to exit: ");
		scanf("%d",&ch);
		
		switch (ch)
			{
				case 1:
					printf("Enter a value : ");
					scanf("%d",&n);
					addFirst(n);
					break;
				
				case 2:
					display();
					break;
				
				case 3:
					delFirst();
					break;
						
				case 4:
					addLast();
					break;
				
				case 5:
					delLast();
					break;
					
				case 6:
					exit(0);
			}
	}
}
