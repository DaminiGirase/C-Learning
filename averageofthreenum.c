#include<stdio.h>

int main()
{
	int a,b,c,sum;
	float average;
	printf("program to calculate average of numbers\n");
	printf("enter the numbers a b and c\n");
	scanf("%d %d %d",&a,&b,&c);
	
	sum=a+b+c;
	average=sum/3;
	printf("sum is:%d",sum);
	printf("average is :%f",average);
	return 0;
	
	
}
