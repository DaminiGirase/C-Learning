#include<stdio.h>
int main(){
	int num1, num2, n;
	float a,b;
	printf("Program of arithmatic operation\n");
	printf("Enter the number of operator:");
	scanf("%d",&n);
	printf("Enter two integer number: ");
	scanf("%d %d",&num1, &num2);
	
	
	switch(n){
		case 1: printf("Addition\n");
		        printf("The sum of %d and %d is %d",num1, num2, num1+num2);
		        break;
		case 2: printf("Substraction\n");
		        printf("The substraction of %d and %d is %d",num1, num2, num1-num2);
		        break;
		case 3: printf("Multiplication\n");
		        printf("The Multiplication of %d and %d is %d",num1, num2, num1*num2);
		        break;
		case 4: printf("Enter two floating number: ");
            	scanf("%f %f",&a, &b);
		        printf("Division\n");
		        printf("The Division of %f and %f is %f",a, b, a/b);
		        break;
		case 5: printf("Modulous\n");
		        printf("The Modulous of %d and %d is %d",num1, num2, num1%num2);
		        break;
		default:printf("Invalid operator\n");
		        break;
	}
	
}
