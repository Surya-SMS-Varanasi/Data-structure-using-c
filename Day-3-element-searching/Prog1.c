//1. Implement Linear Search.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int size, i, key;
	bool isFound = false;
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
		printf("]\n\n");
        printf("Enter the element to search : ");
        scanf("%d", &key);

		//Searching the element

		for(i = 0; i < size; i++){
            if(arr[i] == key){
                isFound = true;
                break;
            }
		}
		// Printing the element
        if(isFound){
            printf("Element %d found at index : %d\n", key, i);
        }
        else{
            printf("The element %d was not present in the array.", key);
        }

		free(arr);
	}
	return 0;
}
