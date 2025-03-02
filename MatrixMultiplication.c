#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,sum=0;
	int i,j,k;
	int a[3][4], b[4][2], result[3][2];
	printf("program to print multiplication of matrix\n");
	
	printf("enter a first matrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matix\n");
		for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		
		for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			for(k=0; k<4; k++)
			{
				sum=a[i][j]*b[i][j];
			}
			result[i][j]=sum;
			sum=0;
		}
	}
	printf("enter the result matix\n");
		for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
