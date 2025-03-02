#include<stdio.h>
int main()
{
	int n,arm=0,c,r;
	printf("program to print amstrong number\n");
	printf("enter a number\n");
	scanf("%d",&n);
	c=n;
	
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm)
	printf("the number is amstrong number\n");
	else
	printf("not an amstrong number/n");
	return 0;
}
