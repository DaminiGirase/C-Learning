#include<stdio.h>
int main()
{
	int array[5];
    int i,j,temp;
	printf("program to sort the array in decending order\n");
	printf("enter the elements\n");
	for(i=0; i<5; i++){
	
	scanf("%d",&array[i]);
}
	for(i=0; i<=5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("decending order of elements:");
		for(i=0; i<5; i++){
	
	printf("%d ",array[i]);
}

	return 0;
}
