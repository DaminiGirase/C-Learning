#include<stdio.h>
int main()
{
	int n,i,j;
	printf("program to print triangle pattern\n");
	printf("enter any number n\n");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
