#include<stdio.h>
int main()
{
	int i;
	printf("program to print even numbers from 1 to 100\n");
	
	for(i=1; i<=100; i++)
	{
		if(i%2==1){
		
			printf("%d\n",i);
	}
	}
	return 0;
}
