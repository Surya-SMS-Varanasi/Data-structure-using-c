//6. Find the minimum element.
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
    int arr[] = {40,22,14,56,39,68,39,54,65,92};
    int size = 10, i;
    int min = INT_MAX; // highest value
    printArray(arr,size);
    for(i = 0; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("Minimum element is : %d \n", min);
    return 0;
}
