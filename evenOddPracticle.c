#include<stdio.h>
int main(){
	int n;
	printf("Program to check wether the number is even or odd\n");
	printf("enter the number : ");
	scanf("%d",&n);
	if(n%2==0){
		printf("The number is even\n");
	}
	else{
		printf("The number is odd\n");
	}
	return 0;
}
