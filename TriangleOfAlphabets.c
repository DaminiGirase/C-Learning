#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter a number\n");
	scanf("%d",&n);
	int a=1;
	for(i=1; i<=n; i++){
		
		for(j=1; j<=i; j++){
			if(n%2==0){
				
				printf("%d",a);
				a++;
			}
			else{
				int d=a+64;
				char ch=(char)d;
				printf("%c",ch);
				a++;
			}
		}
		printf("\n");
	}
	return 0;
}
