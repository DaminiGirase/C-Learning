#include<stdio.h>
int main()
{
	int n;
	printf("program to print triangle of # and *\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	int i,j,k;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
		{
			printf(" ");
			
		}
			for(k=1; k<=i; k++)
			{
			printf("*");	
			}
			printf("\n");
	}
	return 0;
}
