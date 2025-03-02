#include<stdio.h>
int main(){
	char ch;
	int characters = 0, lines = 0, words = 0;
	
	while((ch = getchar()) != EOF){
		characters++;
		if(ch == '\n'){
			lines++;
		}
		if(ch == ' ' || ch == '\n' || ch == '\t'){
			words++;
		}
	}
	 
	 printf("The number of Characters are: %d\n",characters);
	 printf("The number of Lines are: %d\n",lines);
	 printf("The number of Words are: %d\n",words);
	 return 0;
}
