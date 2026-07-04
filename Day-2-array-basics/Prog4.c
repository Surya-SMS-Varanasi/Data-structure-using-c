//4. Find the average of array elements.
#include<stdio.h>

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
    int sum = 0;
    float avg;
    printArray(arr,size);
    for(i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    printf("Sum of element is : %d \n", sum);
    avg = (float)sum / size;
    printf("Average of element is : %0.2f \n", avg);
    return 0;
}
