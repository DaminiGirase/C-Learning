#include<stdio.h>
int main(){
	int n, i;
	printf("Enter the number of array Elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array Elements: ");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}

	int max = arr[0];
	int min = arr[0];
	
	for(i=1; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	
	printf("The largest element is: %d\n",max);
	printf("The Smallest element is: %d",min);
	
}
