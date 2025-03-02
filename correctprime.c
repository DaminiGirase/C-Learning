#include<stdio.h>
int main()
{
	int n,i;
	printf("program to print the number is prime or not\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	int a=0;
	for(i=2; i<=n-1; i++)
	{
		if(n%i==0)
		{
			a=1;
			break;
		}
	}
		if(n==1) printf("1 is neither prime nor composite");
		else if(a==0) printf("the number is prime\n");
	else printf("the number is composite\n");
	return 0;
}
