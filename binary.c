/*Write a C program to implement the following searching techniques.a)binary Search*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[20],low=0,mid,high,i,s;
	printf("Enter the maximum number of element");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element");
	scanf("%d",&s);
	high=n-1;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(a[mid]==s)
		{
			printf("Item found in loc%d",mid+1);
			return 0;
		}
		else if(s<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	printf("Item not found");
}

