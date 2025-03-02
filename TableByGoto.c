#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,area;
	printf("program to print area of triangle when three sides are known\n");
	printf("enter a values of a b and c\n");
	scanf("%d %d %d",&a,&b,&c);
	
	s=a+b+c/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is:%f",area);
	return 0;
	}
