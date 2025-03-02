#include<stdio.h>
int main()
{
	int size;
	printf("program to count number of element in an array\n");
	printf("enter the number of element\n");
	scanf("%d",&size);
	
	int array[size];
	printf("enter the %d elements\n");
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d",&array[i]);
		
	}
	printf("you entered %d element in an array\n",size);
	return 0;
}
