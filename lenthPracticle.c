#include<stdio.h>
int main(){
	char str[23];
	char *ptr;
	int length = 0;
	
	printf("Enter the String: ");
	scanf("%s",str);
	
	ptr = str;
	
	while(*ptr != '\0'){
		length++;
		ptr++;
	}
	
	printf("The length of string is: %d\n",length);
	return 0;
}
