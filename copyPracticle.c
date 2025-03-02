#include<stdio.h>
int main(){
	int arr1[5], arr2[5];
	int *ptr1, *ptr2;
	int i;
	
	printf("Enter array elements: ");
	for(i=0; i<5; i++){
		scanf("%d",&arr1[i]);
	}
	
	
	printf("The actual array is: ");
	for(i=0; i<5; i++){
		printf("%d ",arr1[i]);
	}
	printf("\n");
	
	ptr1 = arr1;
	ptr2 = arr2;
	
	for(i=0; i<5; i++){
		*(ptr2+i) = *(ptr1+i);
	}
	
	printf("Copied array is: ");
	for(i=0; i<5; i++){
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
