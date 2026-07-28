#include <stdio.h>

int findMax(int arr[], int n) {
    // Base case
    if (n == 1)
        return arr[0];

    // Recursive call
    int max = findMax(arr, n - 1);

    // Compare last element with current maximum
    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum element = %d\n", findMax(arr, n));

    return 0;
}
