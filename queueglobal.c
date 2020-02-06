#include <stdio.h>
#include<stdlib.h>

int q[5];
int size=5;
int front=0;
int rear=-1;

void insert()
{
	int item;
	if(rear==size-1)
	{
		printf("queue is full\n");
	}
	else 
	{
		printf("enter the element to enter the queue\n");
		scanf("%d",&item);
		++rear;
		q[rear]=item;
	}
}
void delete()
{
	if (front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("the element deletted from the queue is %d\n",q[front]);
		++front;
	}
}

void display()
{
	for(int i=front;i<=rear;++i)
	{
		printf("%d\t",q[i]);
	}
}

int main(int argc, char *argv[])
{
	int choice;
	printf("Queue (Global Variable) \n");

	while(1)
	{
		printf("Menu\n 1.Insert \n 2.delete \n 3.display\n 4.stop\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: insert();
			break;
			case 2: delete();
			break;
			case 3:display();
			break;
			default:exit(0);
			break;
		}
	}
		
	return 0;
}
