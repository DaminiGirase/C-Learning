#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],*ptr,*lptr;
	printf("program to check the string is palendrom or not\n");
	printf("enter a sting\n");
	gets(str);
	fflush(stdin);
	
	for(lptr=str; *lptr!='\0'; lptr++)
	lptr--;
	for(ptr=str; ptr<=lptr; lptr--,ptr++)
	{
		if(*ptr!=*lptr)
		{
			break;
		}
	}
	if(ptr>lptr)
	{printf("%s is a palendrom");
	}
	else
	{
		printf("%s is not a palendrom");
	}
	return 0;
}
