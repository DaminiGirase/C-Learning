#include<stdio.h>

int main()
{
	int marks;
	printf("program to print ranks of student\n");
	printf("enter marks\n");
	scanf("%d",&marks);
	
	if(marks==99)
	{
		printf("you got first rank\n");
	}
	else if(marks>80)
	{
		printf("you got second rank\n");
	}
	else if(marks>=60)
	{
		printf("you got second rank\n");
	}
	else if(marks>=50)
	{
		printf("you got third rank\n");
	}
	else if(marks>=40)
	{
		printf("you are pass\n");
	}
	else
	{
		printf("you are fail\n");
	}
}
