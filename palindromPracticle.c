#include<stdio.h>
#include<string.h>
int palindrom(char str[]);
int main(){
	char str[50];
	printf("Enter a String: ");
	scanf("%s",str);
	
	if(palindrom(str)) {
		printf("The given string is palindrom\n");
	}
	else{
		printf("The given string is not palindrom\n");
	}
	return 0;
	
}
int palindrom(char str[]){
	int i, length;
	length = strlen(str);
	for(i=0; i<length/2; i++){
		if(str[i] != str[length-i-1]){
		    return 0;
		}
		return 1;
	}
	
}
