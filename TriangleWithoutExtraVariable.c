#include<stdio.h>
int main()
{
	int n,i,j;
	printf("program to print 1 and 0 triangle without extra variable\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			if((i+j)%2==0) printf("1 ");
			else
			printf("0 ");
		}
		printf("\n");
		
	}
	return 0;
}
