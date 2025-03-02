#include<stdio.h>

int main()
{
	int n,r,sum=0;
	printf("progra to calculate sum of individual number\n");
	printf("enter a three positive numbers\n");
	sacnf("%d",&n);
	
	while(n!=0)
	{
	 r=n%10;
	 sum=sum+r; 
	 n=n/10;
	printf("sum of individual positive numbers is:%d\n");
		
	}
	return 0;
}
