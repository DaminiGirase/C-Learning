#include<stdio.h>

int main()
{
	int num,count=0;
	printf("program to count digits in numbers\n");
	printf("enter a number\n");
	scanf("%d",&num);

	
	while(num>0)
	{
	  num=num/10;
	  count++;

}
	  printf("count of digits is : %d",count);
	  return 0;

}
