#include<stdio.h>
int main(){
	int num, sum = 0, digit;
	printf("Program to print sum of individual number\n");
	printf("Enter a number: ");
	scanf("%d",&num);
	  while(num !=0){
	  	digit = num%10;
	  	sum += digit;
	  	num /= 10;
	  }
	  printf("The sum is: %d\n",sum);
}
