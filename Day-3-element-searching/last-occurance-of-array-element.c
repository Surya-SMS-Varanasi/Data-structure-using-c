//9. Find the last occurrence of an element. 
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
    printf("Enter a key to search : ");
    scanf("%d", &key);

    // Searching
    for(i = 0; i < size; i++){
        if( arr[i] == key){
            count = i;
        }
    }

    // Printing the element
    if(count > -1){
        printf("Last occurance of number %d is at index : %d\n\n", key, count);
    }
    else{
        printf("The element %d was not present in the array.\n\n", key);
    }


    return 0;
}
