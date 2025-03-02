#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float root1,root2;
	float root_part,denom;
	printf("program to print roots of quadratic equation\n");
	printf("enter three number\n");
	scanf("%d %d %d",&a,&b,&c);
	
	root_part=sqrt(b*b-4*a*c);
	denom=root_part/2*a;
	root1=-b+root_part;
	root2=-b-root_part;
	printf("roots of quadratic equation are:%f\n %f",root1,root2);
}
