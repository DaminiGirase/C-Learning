#include<stdio.h>

int main()
{
	int radius;
	float area;
	printf("program to print area of circle\n");
	printf("enter the radius of circle\n");
	scanf("%d",&radius);
	
	area=3.15*radius*radius;
	printf("area of circle is: %f",area);
	return 0;
	
}
