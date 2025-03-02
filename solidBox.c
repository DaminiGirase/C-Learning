#include<stdio.h>
int main()
{
	int n;
	printf("enter number of rows\n");
	scanf("%d",&n);
	int m;
	printf("enter number of coloums\n");
	scanf("%d",&m);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("*");
	}
	printf("\n");
}
	return 0;
}
