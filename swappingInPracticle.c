#include<stdio.h>
int swapping(int a,int b);
int main(){
	int x,y;
	printf("Enter two numbers: "); 
	scanf("%d",&x,&y);
	swapping(x,y);
	return 0;
}
int swapping(int a, int b){
	printf("Before swapping a = %d and b = %d\n",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping a = %d and b = %d\n",a,b);
	return 0;
}

