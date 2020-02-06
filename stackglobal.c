//Stack (Global Variable)
#include <stdio.h>
#include <stdlib.h>

int s[5];
int top=-1;
int size=5;

void push()
{
	int item;
	if (top==size-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("enter the element to be inserted to the stack\n");
		scanf("%d",&item);
		++top;
		s[top]=item;
	}
}

void pop()
{
	if (top==-1)
	{
		printf("stack underflow\n");
	}
	else 
	{
		printf("the element %d delected from stack\n ",s[top]);
		--top;
	}
}

void display()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(int i=top;i>=0;--i)
		{
			printf("%d\t",s[i]);
		}
	}
}

int main(int argc, char *argv[])
{
	int choice;
	printf("Stack (Global Variable) \n");

	while(1)
	{
		printf("Menu\n 1.push\n 2.pop\n 3.display\n 4.stop\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			default:exit(0);
			break;

		}
	}
	
	return 0;
}
