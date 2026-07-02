//1. Read and print an array.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int size, i;
	printf("Enter the size of the array : ");
	scanf("%d", &size);
	
	int *arr = (int *) malloc(size*sizeof(int));
	
	if(arr == NULL){
		printf("Memory allocation failed!, pls enter a little size.");
		return 0;
	}	
	else{
		printf("Enter the array elements :\n");
		for( i = 0; i < size; i++){
			scanf("%d",&arr[i]);
		}

		// Printing the array elements
		printf("\nThe array elements are,  arr = [ ");
		for(i=0; i < size; i++){
			if(i == size-1){
				printf("%d ", arr[i]);
				break;	
			}
			printf("%d, ", arr[i]);
		}
		printf("]\n");
		free(arr);
	}
	return 0;
} 
