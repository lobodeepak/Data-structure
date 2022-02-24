/*Write a C program implement STACK with the following operations.a)push,b)pop,c)display*/
#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
int stack[maxsize],top=-1,item,ele;
void push(int ele)
{
	if(top>=maxsize-1)
	{
	printf("stack is full");
	}
	else
	{
		stack[++top]=ele;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		ele=stack[top--];
		printf("item poped is:\t%d",ele);
	}
}
void display()
{
	int i=0;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
	for(i=0;i<=top;i++)
	{
		printf("\t%d",stack[i]);
	}
	}
}
void main()
{
	int ch=0;
	while(1)
	{
	
	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	printf("enter your choice");
	scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:printf("Enter the element to be pushed off:");
				scanf("%d",&item);
				push(item);
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:exit(0);
			default:printf("invalid choice");
				break;
				
		}
	}
	
	
}

	
	
