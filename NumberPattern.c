#include<stdio.h>
int main()
{
	int n,m;
	printf("program to print number pattern\n");
	printf("enter a number rows\n");
	scanf("%d",&n);
	
	printf("enter a number coloume\n");
	scanf("%d",&m);
	
	int i,j;
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
