#include<stdio.h>

int main()
{
	int n,i;
	printf("program to print the sequence in gp\n");
	printf("print a number\n");
	scanf("%d",&n);
	
	int a=100;
	for(i=1; i<=n; i++)
	{
		if(a==0){
			return 1;
}
		printf("%d\n",a);	
	    a=a-3;

	}
	return 0;
}
