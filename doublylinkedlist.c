#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>


struct node
{
	struct node *llink;
	int data;
	struct node *rlink;
};
struct node *first=NULL;

void insert_front()
{
	int item;
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("enter the element to be inserted\n");
	scanf("%d",&item);
	p->data=item;
	p->llink=NULL;
	p->rlink=NULL;

	if (first==NULL)
	{
		first=p;
	}
	else
	{
		p->rlink=first;
		first->llink=p;
		first=p;
	}
}

void insert_rear()
{
	int item;
	struct node *p,*temp;
	p=(struct node *)malloc(sizeof(struct node));
	printf("enter the element to be inserted\n");
	scanf("%d",&item);
	p->data=item;
	p->llink=NULL;
	p->rlink=NULL;

	if (first==NULL)
	{
		first=p;
	}
	else
	{
		temp=first;
		while(temp->rlink!=NULL)
		{
			temp=temp->rlink;
		}
		temp->rlink=p;
		p->llink=temp;
	}
}

void delete_front()
{
	struct node *temp;
	if (first==NULL)
	{
		printf("Deletion not possile , list is empty\n");
	}
	else if (first->rlink==NULL)
	{
		printf("the deleted element is %d\n",first->data);
		free(first);
		first=NULL;
	}
	else
	{
		printf("the deleted element is %d\n",first->data);
		temp=first;
		first=first->llink;
		free(temp);
		first->llink=NULL;
	}
}

void delete_rear()
{
	struct node *temp;
	if (first==NULL)
	{
		printf("Deletion not possile , list is empty\n");
	}
	else if (first->rlink==NULL)
	{
		printf("the deleted element is %d\n",first->data);
		free(first);
		first=NULL;
	}
	else
	{
		temp=first;
		while (temp->rlink->rlink!=NULL)
		{
			temp=temp->rlink;
		}
		printf("the deleted element is %d\n",temp->rlink->data);
		free(temp->rlink);
		temp->rlink=NULL;
		
	}
}
void display()
{
	struct node *temp;
	if (first==NULL)
	{
		printf("list is empty\n");
	}
	else if(first->rlink==NULL)
	{
		printf("The element is %d\n", first->data);
	}
	else 
	{
		temp=first;
		while(temp!=NULL)
		{
			printf(" %d\t", temp->data);
			temp=temp->rlink;
		}
	}
}


	

int main(int argc, char *argv[])
{
	int choice;
	printf("Doubly linked list \n");

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
