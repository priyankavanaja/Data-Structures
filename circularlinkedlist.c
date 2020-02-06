#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *link;
};

struct node *first=NULL;
void insert_front()
{
	int item;
	struct node *p, *temp;
	p=(struct node *) malloc (sizeof(struct node));
	printf("enter the element to be inserted\n");
	scanf("%d",&item);
	p->data=item;
	p->link=p;
	if(first==NULL)
	{
		first=p;
	}
	else
	{
		temp=first;
		while (temp->link!=first)
		{
			temp=temp->link;
		}
		temp->link=p;
		p->link=first;
		first=p;
	}
}

void insert_rear()
{
	int item;
	struct node *p,*temp;
	p=(struct node *) malloc (sizeof(struct node));
	printf("enter the element to be inserted\n");
	scanf("%d",&item);
	p->data=item;
	p->link=p;
	if(first==NULL)
	{
		first=p;
	}
	else
	{
		temp=first;
		while (temp->link!=first)
		{
			temp=temp->link;
		}
		temp->link=p;
		p->link=first;
	}
}

void delete_front()
{
	struct node *temp,*x;
	if (first==NULL)
	{
		printf("list is empty, deletion not possible\n");
	}
	else if(first->link==first) 
	{
		printf("element deleted is %d\n", first->data);
		first=NULL;
	}
	else
	{
		printf("element deleted is %d\n", first->data);
		temp=first;
		while (temp->link!=first)
		{
			temp=temp->link;
		}
		x=first;
		first =first->link;
		temp->link=first;
		free(x);
	}
}

void delete_rear()
{
	struct node *temp;
	if (first==NULL)
	{
		printf("list is empty, deletion not possible\n");
	}
	else if(first->link==first) 
	{
		printf("element deleted is %d\n", first->data);
		first=NULL;
	}
	else
	{
		temp=first;
		while (temp->link->link!=first)
		{
			temp=temp->link;
		}
		printf("element deleted is %d\n", temp->link->data);
		free(temp->link);
		temp->link=first;
	}
}
void display()
{
	struct node *temp;
	if (first==NULL)
	{
		printf("list is empty\n");
	}
	else if(first->link==first)
	{
		printf("The element is %d\n", first->data);
	}
	else 
	{
		temp=first;
		while(temp->link!=first)
		{
			printf(" %d\t", temp->data);
			temp=temp->link;
		}
		printf("%d\n",temp->data);
	}
}

int main(int argc, char *argv[])
{
	int choice;
	printf("Circular linked list \n");

	while(1)
	{
		printf("Menu\n 1.insert front\n 2.insert rear\n 3.delete front\n 4.delete rear\n 5.display\n 6.stop\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: insert_front();
			break;
			case 2:insert_rear();
			break;
			case 3: delete_front();
			break;
			case 4: delete_rear();
			break;
			case 5: display();
			break;
			default: exit(0);
			break;

		}
	}
	
	return 0;
}
