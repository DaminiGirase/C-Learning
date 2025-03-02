#include<stdio.h>

int main()
{
	int marks=100,attendance=85;
	float cgpa=9.9;
	printf("program of nested if-else\n");
	
	if(marks>=50)
	{
		if(attendance>=60)
	{
	    if(cgpa>=5.5)
	{
	     printf("your cgpa is good\n");
		
		}
		else
		printf("your attendance is not good");
	}
	else
	printf("you are fail\n");
}
return 0;
}
