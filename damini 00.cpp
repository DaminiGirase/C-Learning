//Lab 01 B :- swaping of two numbers a,b=b,a(without 3rd variable)
//name = Priya Tayade, branch = AIDS1,ROLL NO= 57, batch =03
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 1st number");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
	
	printf("\nbefore swaping \n\t a=%d ,\t b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nbefore swaping \n\t a=%d , \t b=%d",a,b);
	return 0;
	
}

