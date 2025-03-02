//Lab 04,All the possible roots of quadratic equation
//ax2+bx+c=0 //a,b,c=1,5,6;1,2,1;1,2,2;
//Branch= AIDS1,roll no. 57,NAME=Priya Pravin Tayade

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,r1,r2;
    printf("enter a (coefficient of x2)= ");
	scanf("%f,&a");	
	printf("enter b (coefficient of x)= ");
	scanf("%f,&b");
	printf("enter c = ");
	scanf("%f",&c);
	
	D=(b*b-4*a*c);
	if(D<0)
	{
		r1=(-b+sqrt(D))/(2*a);
		r2=(-b-sqrt(D))/(2*a);
		printf("\n real and unequal roots are %f,%f",r1,r2);
	}
	else if (D==0)
	{
		r1=r2=-b/(2*a);
		printf("\n real and equal roots are %f,%f",r1,r2);
	}
	else
	{
		printf("\n imaginery roots");
	}
	return 0;
}
