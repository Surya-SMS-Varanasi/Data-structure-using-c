#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void printArray(int arr[], int size);
void linearSearch(int arr[], int size, int value);
void binarySearch(int arr[], int size, int value);
void sortedLinearSearch(int arr[], int size, int value);
void main(){
    int arr[] = {40,22,14,56,39,68,39,54,65,92};
    int size = 10;
    int choice,key;
    bool loopOn = true;

    printArray(arr,size);

    while(loopOn){
        printf("\n\n\t\t Welcome to searching world.\n-----------------------------------------------------\n\n");
        printf("Select options.\n-------------------------\n");
        printf("1. Search an element by linear search.\n");
        printf("2. Search an element by binary search.\n");
        printf("3. Search an element by linear search in sorted array.\n");
        printf("4. Exit.\n\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printArray(arr,size);
                printf("Enter key to search : ");
                scanf("%d",&key);
                linearSearch(arr,size,key);
                break;

            case 2:
                printArray(arr,size);
                printf("Enter key to search : ");
                scanf("%d",&key);
                binarySearch(arr, size, key);
                break;
            case 3:
                printArray(arr,size);
                printf("Enter key to search : ");
                scanf("%d",&key);
                sortedLinearSearch(arr,size, key);
                break;
            case 4 :
                loopOn=false;
                break;
            default:
                printf("Invalid input. Try again...");
                break;
        }
    }
}
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
void linearSearch(int arr[], int size, int value){
    int i =0;
    bool hasFound = false;




    if(hasFound)
        printf("Element %d found at index : %d", value,i);
    else
        printf("Element was not present in the array.");
}
void binarySearch(int arr[], int size, int value){
    int i,j,low,high,mid;
    bool hasFound = false;
    printf("Array before sorting : ");
    printArray(arr,size);

    //Sorting
    for(i = 0; i < size-1; i++){
            int min = i;
        for(j= i+1; j < size; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
    }
    printf("Array after sorting : ");
    printArray(arr,size);
    //Binary Search
    low = 0;
    high = size-1;
    while(low <= high){
        mid=(low+high)/2;
        if( value < arr[mid]){
            high = mid;
        }
        else if( value > arr[mid]){
            low = mid;
        }
        else{
            hasFound = true;
            break;
        }
    }
    if(hasFound)
        printf("Element %d found at index : %d", value,mid);
    else
        printf("Element was not present in the array.");
}
void sortedLinearSearch(int arr[], int size, int value){
    int i, j;
    bool hasFound = false;
    printf("Array before sorting : ");
    printArray(arr,size);
    for(i = 0 ; i < size-1; i++){
        int index = i;
        for(j=i+1; j < size; j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    printf("Array after sorting : ");
    printArray(arr,size);
    i=0;
    while(i < size){
        if(arr[i] == value){
            hasFound = true;
            break;
        }
        i++;
    }
    if(hasFound)
        printf("Element %d found at index : %d", value,i);
    else
        printf("Element was not present in the array.");
}
