#include<stdio.h>
int main()
{
	int n;
	printf("program to print absolute value of number\n");
	printf("enter a number\n");
	scanf("%d",&n);
	int adnum= abs(n);
	printf("the given number is:%d\n",n);
	printf("absolute value of %d is:%d",n,adnum);
	return 0;
}
