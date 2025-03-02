#include<stdio.h>
int main(){
	int num, sum=0, digit, rev=0;
	printf("Program to count sum of digit and reverse\n");
	printf("Enter the number: ");
	scanf("%d",&num);
	
	while(num != 0){
		digit = num%10;
		sum += digit;
		rev = (rev*10)+digit;
		num /= 10;
	}
	printf("Sum and reverse of number is: %d %d",sum, rev);
}
