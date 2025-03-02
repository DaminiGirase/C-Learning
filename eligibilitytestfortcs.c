#include<stdio.h>

void main()
{
	float hsc,ssc,cgpa;
	printf("program to find the person is eligible or not for interview\n");
	printf("enter marks and cgpa oa hsc ssc and engineering\n");
	scanf("%f %f %f",&hsc,&ssc,&cgpa);
	
	if(hsc>=80){
		if(ssc>=80){
			if(cgpa>=8){
				printf("you are eligible\n");
			}
			else
			
				printf("you are not eligible\n");
			}
		else
		
			printf("you are not eligible/n");
		}
	else

		printf("you are not eligible\n");
	}
	

