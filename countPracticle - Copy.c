#include<stdio.h>
int main(){
	int num,count = 0;
	printf("Program to count number of digits\n");
	printf("Enter the number: ");
	scanf("%d",&num);
	
	while(num != 0){
	    num = num/10;
		count++;
	}
	printf("The number of digits are: %d",count);
	return 0;
}
