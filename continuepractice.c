#include<stdio.h>
int main()
{
	int i;
/*	printf("program to print odd numbers from 1 to 100\n");
	printf("enter a number\n");
	scanf("%d",&n);*/
	
	
	for(i=1; i<=100; i++)
	{
		if(i%2==0)
		{
		continue;
	}
	printf("%d\n",i);
	}
	return 0;
}
