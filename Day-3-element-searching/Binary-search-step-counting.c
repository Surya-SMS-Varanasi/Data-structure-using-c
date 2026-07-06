//3.Implement Binary Search. .
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
    int size = 10, i,j;
    int key, count = 0;
    bool hasFound = false;

    printArray(arr,size);
    printf("Enter a key to search : ");
    scanf("%d", &key);

    //Sorting the array with Sort
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if( arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n\nArray after sorting...\n\n ");
    printArray(arr, size);

    // Binary Search Implementaion
    int low, high, mid;
    low = 0;
    high = size-1;

    while(low <= high){
        mid = (low+high)/2;

        if(key < arr[mid]){
            high = mid -1;
            count++;
        }
        else if(key > arr[mid]){
            low = mid + 1;
            count++;
        }
        else{
            hasFound = true;
            count++;
            break;
        }
    }

    if(hasFound){
        printf("Element %d found at index.\n\n", key);
        printf("Total steps taken to find the element : %d \n\n", count);
    }
    else{
        printf("The element %d was not present in the array.\n\n", key);
        printf("Total steps taken to find the element : %d \n\n", count);
    }
    return 0;
}
