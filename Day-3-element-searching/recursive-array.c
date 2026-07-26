#include <stdio.h>

void printArray(int arr[], int n, int index)
{
    // Base case
    if (index == n)
        return;

    printf("%d ", arr[index]);

    // Recursive call
    printArray(arr, n, index + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements are:\n");
    printArray(arr, n, 0);

    return 0;
}
