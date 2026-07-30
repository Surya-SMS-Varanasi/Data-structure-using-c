#include <stdio.h>

int recursiveLinearSearch(int arr[], int size, int index, int key) {
    // Base case: Element not found
    if (index == size)
        return -1;

    // Base case: Element found
    if (arr[index] == key)
        return index;

    // Recursive call
    return recursiveLinearSearch(arr, size, index + 1, key);
}

int main() {
    int arr[] = {10, 25, 30, 45, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 45;

    int result = recursiveLinearSearch(arr, size, 0, key);

    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found.\n", key);

    return 0;
}
