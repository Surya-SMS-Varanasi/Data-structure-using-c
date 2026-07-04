//5. Find the maximum element.
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
    int max = INT_MIN;// lowest value
    printArray(arr,size);
    for(i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("Maximum element is : %d \n", max);
    return 0;
}
