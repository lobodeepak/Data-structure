/*Write a C program to implement the following searching techniques.a)linear Search*/
#include<stdio.h>
void main()
{
	int n,a[20],i=0,s,k=0;
	printf("Enter the maximum number of element");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i] == s)
		{
			k=1;
			break;
		}
	}
	if(k==1)
	{
		printf("The Element is found in loc %d",i);
	}
	else
	{	
		printf("the Element is not found");
	}
}

