#include<stdio.h>
int main()
{
	int n,i,table;
	printf("program to print table\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		table=n*i;
	printf("%d",table);	
	}
	
	return 0;
}
