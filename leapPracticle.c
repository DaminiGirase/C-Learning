#include<stdio.h>
int main(){
	int year;
	printf("Program to check whether the year is leap or not\n");
	printf("Enter a year: ");
	scanf("%d",&year);
	
	if((year%4==0 && year%100!=0) || (year%400==0)){
		printf("The year is Leap\n");
	}
	else{
		printf("The year is not Leap\n");
	}
}
