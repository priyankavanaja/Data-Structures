#include <stdio.h>
#include<stdlib.h>


int insert(int q[], int size,int rear)
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
	return rear;
}
int delete(int q[],int rear,int front)
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
	return front;
}

void display(int q[],int rear,int front)
{
	for(int i=front;i<=rear;++i)
	{
		printf("%d\t",q[i]);
	}
}

int main(int argc, char *argv[])
{
	int choice;
	int q[5];
	int size=5;
	int front=0;
	int rear=-1;

	printf("Queue (Global Variable) \n");

	while(1)
	{
		printf("Menu\n 1.Insert \n 2.delete \n 3.display\n 4.stop\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: rear=insert(q,size,rear);
			break;
			case 2: front=delete(q,rear,front);
			break;
			case 3: display(q,rear,front);
			break;
			default:exit(0);
			break;
		}
	}
		
	return 0;
}
