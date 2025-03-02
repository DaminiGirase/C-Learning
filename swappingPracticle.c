#include<stdio.h>
int main(){
		int a, b;
	printf("Proram to swap to numbers without using third variable\n");
	printf("enter value of a and b\n");
	scanf("%d %d", &a, &b);
	printf("Before swapping a=%d and b=%d\n", a, b);
//	a = a+b;
//	b = a-b;
//	a = a-b;
    int temp = a;
    a = b;
    b = temp;
	printf("After swapping a=%d and b=%d\n", a, b);

}
