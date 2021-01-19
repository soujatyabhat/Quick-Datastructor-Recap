#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node 
{
	int roll;
	char name[5];
	double marks;
	struct node *next;
};

struct node  *root = NULL;

int roll;
float marks;
char name[5];
	
void addData()
{
	printf("Add roll : ");
	scanf("%d",&roll);
	
	printf("Add name : ");
	scanf("%s",name);
	
	printf("Add marks : ");
	scanf("%f",&marks);
	
	printf("\n");
}
void addBegaining(int roll, float marks, char *name)
{
	struct node *tmp;
	tmp = (struct node*)malloc(sizeof(struct node));
	strcpy(tmp->name,name);
	tmp->roll = roll;
	tmp->marks = marks;
	tmp->next = root;
	root = tmp;
}

void delBegaining()
{
	struct node *tmp;
	tmp = root;
	root = tmp->next;
	printf("Roll no %d's data has been deleted\n",tmp->roll);
	free (tmp);
}

void addEnd(int roll, float marks, char *name)
{
	struct node *tmp,*tmp1;
	if(root != NULL)
		{
			tmp = (struct node*)malloc(sizeof(struct node));
			tmp1 = root;
			while(tmp1->next != NULL)
			{
				tmp1 = tmp1->next;
			}
			tmp1->next = tmp;
		
			tmp->roll = roll;
			strcpy(tmp->name,name);
			tmp->marks = marks;
			tmp->next = NULL;
		}
	else
		{
			printf("How should add node at the begaining of the list.\n");
		}
}

void delEnd()
{
	struct node *tmp1;
	struct node *tmp = root;
	
	if (root == NULL)
		{
			printf("List is empty\n");
		}
	else
		{
			while(tmp->next != NULL)
				{
					tmp1 = tmp;
					tmp = tmp->next;
				}
			
			printf("Roll : %d's  records has been deleted\n\n",tmp->roll);
			tmp1->next = NULL;
			free (tmp);
		}
}


void addAny()
{
	int pos,count = 0;
	struct node *data,*forward,*prev;
	forward = root;
	
	if(root == NULL)
		printf("No data present in the list");
	else
		{
			printf("Enter position : ");
			scanf("%d",&pos);
			
			while(++count != pos)
					{
						prev = forward;
						forward = prev->next;
					}
					
			addData();
			
			data = (struct node*)malloc(sizeof(struct node));
			
			data->roll = roll;
			strcpy(data->name,name);
			data->marks = marks;
			
			prev->next = data;
			data->next = forward;	
		}
}

void delAny()
{
	int pos,count = 1;
	struct node *data,*forward,*prev;
	forward = root;
	
	if(root == NULL)
		printf("List is empty");
	else
		{
				printf("Enter position : ");
				scanf("%d",&pos);
				
				while(count++ < pos)
					{
						prev = forward;
						forward = prev->next;
					}
				data = forward->next;
				prev->next = data;
				printf("%d is deleted\n",data->roll);
				
				free (data);
		}
}

void display()
{
	struct node *tmp,*data;
	tmp = root;
	system("cls");
	while(tmp != NULL)
	{
		printf("Roll: %d\n",tmp->roll);
		printf("Name : %s\n",tmp->name);
		printf("Marks : %.2f\n\n",tmp->marks);
		
		printf("Memory : %x\n",sizeof(struct node));
		tmp = tmp->next;
		
	}
}
void main()
{
	int ch;
	while(1)
	{
		printf("1.Add First \n2.Delete First \n3.Add End \n4.Delete End \n5.Add Any\n6.Delete Any\n7.Display  \n\nEnter choose : ");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				addData();
				addBegaining(roll,marks,name);
			break;
			
			case 2:
					delBegaining();
			break;
			
			case 3:
					addData();
					addEnd(roll,marks,name);
			break;
			
			case 4:
					delEnd();
			break;
			
			case 5:
					addAny();
					break;
			break;	
			
			case 6:
					delAny();
			break;
			
			case 7:
					display();
			break;
		}
	}
}
	
