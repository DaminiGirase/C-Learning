#include<stdio.h>
int main()
{
    int a = 10, b = 20;
	int sum, differance, product, quotient, remainder;
	sum = a + b;
	differance = a - b;
	product = a * b;
	quotient = a /b;
	remainder = a % b;
	
	printf("for a = %d and b = %d\n",a,b);
	printf("Addition: %d + %d = %d\n",a,b,sum);
	printf("Substraction: %d - %d = %d\n",a,b,differance);
	printf("Multiplication: %d * %d = %d\n",a,b,product);
	printf("Division: %d / %d = %d\n",a,b,quotient);
	printf("Modulo: %d % %d = %d\n",a,b,remainder);
	return 0;	
}
