#include<stdio.h>

int main()
{
	int n,i;
	printf("check wether the number is prime or composite\n");
	printf("enter a number\n");
	scanf("%d",&n);
	if(n>1){
	
	for(i=2; i<=n-1; i++)
	{
		if(n==2){
			printf("the number is prime");
		}
		else if(n%i==0)
		{
			printf("the number is composite\n");
			break;
		}
		else
		{
			printf("the number is prime\n");
			break;
		}
	}}
	else{
		printf("The number is prime");
	}
	return 0;
	}
