#include<stdio.h>
int main()
{
	int n,i;
	printf("program to print the sum of even digits in a number\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	int sum=0;
	int r;
	for(i=1;i<=n; i++)
	{
	 if(i%2==0){
	  r=r;}
	 r=n%10;
	 sum=sum+r;
	 n=n/10;		
		
}
	printf("the sum of digits are:%d",sum);
	return 0;
}
