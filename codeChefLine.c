#include<stdio.h>
int main(){
	char ch;
	int lines = 0, words = 0, characters = 0, inword = 0;
	while((ch = getchar()) != EOF){
		if(ch == '\n'){
			lines++;
		}
		else{
			characters++;
		}
		if(ch == ' ' || ch == '\n' || ch == '\t'){
			inword = 0;
		}
		else if(!inword){
			inword = 1;
		    words++;
		}
	}
	if(characters>0 && ch != '\n'){
		lines++;
	}
	printf("Lines: %d\n",lines);
	printf("Words: %d\n",words);
	printf("Characters: %d\n",characters);
	return 0;
}
