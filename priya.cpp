//name = Priya Tayade, branch AIDS1 ,Roll no. 57,
//Lab 05:-simple arithmetic operator
#include<stdio.h>
int main(){
	char op;
	int num1,num2,result;
	printf("enter any choice('+' for add,'-'for sub,;'*'for mul,'/'for div:-)");
	scanf("%c",&op);
	printf("enter the value of num1 and num2");
	scanf("%d %d",&num1, &num2);
	switch(op)
	{
		case'+':result=num1+num2;
		printf("add is:-%d",result);
		break;
		case'-':result=num1-num2;
		printf("sub is:-%d",result);
		break;
		case'*':result=num1*num2;
		printf("mul is:-%d",result);
		break;
		case'/':result=num1/num2;
		printf("div is:-%d",result);
		break;
		default:printf("enter valid operator");
	}
}
