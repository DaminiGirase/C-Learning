#include<stdio.h>
int main(){
	char str1[50], str2[50];
	char *ptr1, *ptr2;
	
	printf("Enter first string: ");
	scanf("%s",str1);
	printf("Enter second string: ");
	scanf("%s",str2);
	
	ptr1 = str1;
	ptr2 = str2;
	
	while(*ptr1 == *ptr2){
		if(*ptr1 == '\0'){
			printf("The Strings are equal\n");
			return 0;
		}
		ptr1++;
		ptr2++;
	}
	printf("The Strings are not equal\n");
	return 0;
}
