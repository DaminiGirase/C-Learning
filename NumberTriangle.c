#include<stdio.h>
int main()
{
	int n;
	printf("program to print cross of stars\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	int i,j;
	int a=1;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
	      printf("%d ",a);
	      a++;
		}
		printf("\n");
	}
	return 0;
}
