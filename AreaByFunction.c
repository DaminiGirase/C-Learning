#include<stdio.h>
void area();
void main()
{
	int result;
	printf("program to calculate area of square\n");
    area();
}
void area()
{
	int side,result;
	printf("enter side of square\n");
	scanf("%d",&side);
	result = side*side;
	printf("area of square is:%d",result);
}
