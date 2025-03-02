#include<stdio.h>
int area();
void main()
{
	int result;
	printf("program to find area without argument with return value\n");
	result = area();
	printf("the area of square is:%d",result);
}
int area()
{
	int side;
	printf("enter a side: ");
	scanf("%d",&side);
	return side*side;
}
