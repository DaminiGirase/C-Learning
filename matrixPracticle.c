#include<stdio.h>
int main(){
	int mat1[3][3], mat2[3][3], result[3][3], i, j, k;
	printf("Enter First Matrix: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d ",&mat1[i][j]);
		}
	}
	
    printf("Enter Second Matrix: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d ",&mat2[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			result[i][j] = 0;
			for(k=0; k<3; k++){
				result[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	 printf("Result of Matrix is: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
}
