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
    bool hasFound = false;
    int key, count = 0;
    printArray(arr,size);
    printf("Enter a key to search : ");
    scanf("%d", &key);

    // Searching
    for(i = 0; i < size; i++){
        if( arr[i] == key){
            hasFound = true;
            count++;
            break;
        }
        count++;
    }

    // Printing the element
    if(hasFound){
        printf("Element %d found at index : %d\n\n", key, i);
        printf("Total steps taken to find the element : %d \n\n", count);
    }
    else{
        printf("The element %d was not present in the array.\n\n", key);
        printf("Total steps taken to find the element : %d \n\n", count);
    }


    return 0;
}
