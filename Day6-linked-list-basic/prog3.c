//7. Count even and odd elements in an array.
#include<stdio.h>
#include<stdlib.h>

void printArray(int arr[], int size){
    printf("\nArray is =  { ");
    for(int i = 0; i < size; i++){
            if( i == (size-1)){
                printf("%d", arr[i]);
                continue;
            }
        printf("%d, ", arr[i]);
    }
    printf(" } \n\n");
}

int main(){
    int arr[] = {40,22,14,56,39,22,39,54,22,92};
    int size = 10, i;
    int key, count = -1;
    printArray(arr,size);
    printf("Array before reverse : ");

    // Searching
    for(i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i]=arr[size-1];
        arr[size-1] = temp;
    }

    // Printing the element
   printf("Array after reverse: ");
    printArray(arr,size);


    return 0;
}
