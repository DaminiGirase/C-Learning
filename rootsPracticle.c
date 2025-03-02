#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float root1,root2;
	float root_part,denom;
	printf("Program to print roots of quadratic equatiion\n");
	printf("Enter values of a b and c: ");
	scanf("%f %f %f",&a,&b,&c);
	
	root_part = sqrt(b*b-4*a*c);
	denom = 2*a;
	
	root1 = (-b+root_part)/denom;
	root2 = (-b-root_part)/denom;
	
	printf("The vaule of root1 = %f\n and value of root2 = %f\n",root1,root2);
}
