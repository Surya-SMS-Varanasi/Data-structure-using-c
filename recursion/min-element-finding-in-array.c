#include <stdio.h>

int findMin(int arr[], int size) {
    // Base case
    if (size == 1)
        return arr[0];

    // Recursive call
    int min = findMin(arr + 1, size - 1);

    // Compare current element with recursive minimum
    return (arr[0] < min) ? arr[0] : min;
}

int main() {
    int arr[] = {15, 8, 25, 3, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum element = %d\n", findMin(arr, size));

    return 0;
}
