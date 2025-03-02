#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("program to print reverse of string\n");
	printf("enter a string\n");
	gets(s);
	strrev(s);
	printf("reverse of string is:%s\n",s);
	return 0;
}
