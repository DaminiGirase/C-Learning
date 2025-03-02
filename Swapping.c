#include<stdio.h>
int main()
{
	int n,m,temp;
	printf("program to print swapping of two numbers\n");
	printf("enter two number\n");
	scanf("%d %d",&n,&m);
	printf("before swapping numbers are:%d %d\n",n,m);
	
	temp=n;
	n=m;
	m=temp;
	printf("after swapping numbers are:%d %d",n,m);
	return 0;
}
