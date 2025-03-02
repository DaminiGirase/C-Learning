#include<stdio.h>
int main(){
	int i, j;
	for(i='A'; i<='E'; i++){
		for(j='E'; j>i; j--){
			printf(" ");
		}
		for(j='A'; j<=i; j++){
			printf("%c ",j);
		}
		for(j=i-1; j>='A'; j--){
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}
