#include<stdio.h>
int main()
{
	int n,i;
	printf("program to print factorial of given number\n");
	printf("enter a number to which factorial calculate\n");
	scanf("%d",&n);
	
	int product=1;
	for(i=1; i<=n; i++)
	{
		product=product*i;
		printf("the factorial of %d:%d\n",i,product);
	}
	return 0;
	}
