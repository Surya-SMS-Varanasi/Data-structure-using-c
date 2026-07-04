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
    int arr[] = {40,22,14,56,39,68,39,54,65,92};
    int size = 10, i;
    int even = 0, odd = 0;
    printArray(arr,size);
    for(i = 0; i < size; i++){
        if((arr[i]% 2) == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even elements in the array are : %d \n", even);
    printf("Odd elements in the array are : %d \n", odd);
    return 0;
}
