#include<stdio.h>
int main()
{
	int n,i;
	printf("program to print fibonacci sequence\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	int a=1;
	int b=1;
	int sum=1;
	for(i=1; i<=n-2; i++)
	{
	 sum=a+b;
	 a=b;
	 b=sum;	
	
	}
	printf("the fibonacci of %d is:%d",n,sum);
	return 0;
}
