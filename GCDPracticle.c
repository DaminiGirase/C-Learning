#include<stdio.h>
int GCD(int a,int b);
int main(){
	int x,y,z;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	z = GCD(x,y);
	printf("The GCD of %d and %d is: %d\n",x,y,z);
}
int GCD(int a,int b){
	if(b>a){
		return GCD(b,a);
	}
	return (b==0) ? a : (b,a%b);
}
