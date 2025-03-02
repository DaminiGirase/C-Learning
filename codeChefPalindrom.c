#include<stdio.h>
#include<string.h>
int toLowerCase(char str[]){
	int i=0;
	while(str[i] != '\0'){
		str[i] = tolower(str[i]);
		i++;
	}
}
int isPalindrom(char str[]){
	int start = 0;
	int end = strlen(str) - 1;
	while(start<end){
		if(!isalnum(str[start])){
			start++;
		}
		else if(!isalnum(str[end])){
			end--;
		}
		else{
			if(str[start] != str[end]){
				return 0;
			}
		}
		start++;
		end--;
	}
	return 1;
}
int main(){
	char str[50];
	gets(str);
	toLowerCase(str);
	if(isPalindrom(str)){
		printf("Palindrom\n");
	}
	else{
		printf("Not Palindrom\n");
	}
return 0;	
}
