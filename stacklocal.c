//Stack (Local Variable)
#include <stdio.h>
#include <stdlib.h>

int push(int s[],int top, int size)
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
	return top;
}

int pop( int s[], int top)
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
	return top;
}

void display(int s[],int top)
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
	int s[5];
	int top=-1;
	int size=5;

	printf("Stack (Local Variable) \n");

	while(1)
	{
		printf("Menu\n 1.push\n 2.pop\n 3.display\n 4.stop\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: top = push(s,top,size);
			break;
			case 2: top = pop(s,top);
			break;
			case 3:display(s,top);
			break;
			default:exit(0);
			break;

		}
	}
	
	return 0;
}
