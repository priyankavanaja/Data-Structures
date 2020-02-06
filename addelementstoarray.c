/*
 * addnewelementtoarray.c
 *
 *  Created on: 18-Jan-2020
 *      Author: PRIYANKA
 */


#include<stdio.h>
int main()
{
	int arr[50],n, data,pos;

	printf("enter the no of elements to be added\n ");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(int i=0;i<n;++i)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the elements to be added\n");
	scanf("%d",&data);

	printf("enter the position of elements to be added\n");
	scanf("%d",&pos);

	if(pos-1>n)
	{
		printf("invalid pos\n");
	}
	else
	{
	for(int i=n;i>=pos;--i)
	{
		arr[i]=arr[i-1];
	}

	arr[pos-1]=data;
	n=n+1;

	}

	printf("Print the array elements\n");
		for(int i=0;i<n;++i)
		{
			printf("%d\t",arr[i]);
		}

return 1;
}
