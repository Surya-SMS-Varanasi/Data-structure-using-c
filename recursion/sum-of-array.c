#include <stdio.h>

// Recursive function to find sum of array
int sumArray(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + sumArray(arr, n - 1);
}

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum of array elements = %d", sumArray(arr, n));

    return 0;
}
