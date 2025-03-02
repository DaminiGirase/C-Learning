#include<stdio.h>
int max(int a, int b);
int min(int a, int b);
int main(){
	int x,y,p,q;
	printf("Enter Two Numbers: ");
	scanf("%d %d",&x,&y);
    p = max(x,y);
	q = min(x,y);
	printf("The Maximun value is: %d\n",p);
	printf("The Minimum value is: %d\n",q);
	return 0;	
}
int max(int a, int b){
	return (a>b) ? a : b;
}
int min(int a, int b){
	return (a>b) ? b : a;
}
