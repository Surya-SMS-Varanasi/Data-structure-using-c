#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int arr[]={23,45,65,88,44,33,768,6,23,12};
    int size=10;
    
    for(int i = 0; i < size-1; i++)
    {
       int min = i;
        for(int j = i+1; j< size; j++ ){
            if(arr[min] < arr[j]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i]=temp;
    }
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}