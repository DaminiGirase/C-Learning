#include<stdio.h>
int main()
{
	int n;
	printf("program to print cross of stars\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	int i,j;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i==j || i+j==n+1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
