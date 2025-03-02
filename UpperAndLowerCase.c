#include<stdio.h>
int main()
{
	char ch;
	int i;
	int lcun=0,ucun=0;
	for(i=1; i<=10; i++)
	{
		printf("enter the character\n");
	    ch=getchar();
	    fflush(stdin);
	   	if(ch<'A'|| ch>'z'|| (ch>'Z'&& ch<'a'))
	   	{
	   	printf("not a character");
		}
		else if(ch>='a' && ch<='z')
		{
			lcun=lcun+1;
		   } 
		 else
		 {
		 	ucun=ucun+1;
		   }  
	}
	
	if(lcun<ucun)
	{
		printf("lower case character are less than upper case characters\n");
	}
	else if(lcun>ucun)
	{
		printf("lower case characters are gretter than upper case character\n");
	}
	else
	{
		printf("the number of upper and lower characters are equal\n");
	} 
	return 0;
}
