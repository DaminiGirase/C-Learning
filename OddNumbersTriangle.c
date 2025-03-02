#include<stdio.h>
int main()
{
	int n,i,j;
	printf("program to print triangle of odd numbers\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	int a=1;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			
			printf("%d ",a);
			a+=2;
		}
		printf("\n");
	}
	return 0;
}
