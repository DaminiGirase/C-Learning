#include<stdio.h>
int main()
{
	int n;
	printf("program to print star plus\n");
	printf("enter a number\n");
	scanf("%d",&n);
	
	int i,j;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			int a=n/2+1;
			if(j==a || i==a) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}
