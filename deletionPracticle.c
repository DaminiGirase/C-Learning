#include<stdio.h>
int main(){
	int arr[100], pos, i, n;
	printf("Enter number of array elements: ");
	scanf("%d",&n);
	printf("Enter a Array: ");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the position you want delet: ");
	scanf("%d",&pos);
	
	for(i=pos-1; i<n-1; i++){
		arr[i] = arr[i+1];
	}
	n--;
	
	printf("The Updated array is: ");
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
