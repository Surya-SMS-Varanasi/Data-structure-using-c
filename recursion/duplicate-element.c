#include <stdio.h>

void findDuplicate(int arr[], int n, int i, int j)
{
    if (i >= n - 1)
        return;

    if (j >= n)
    {
        findDuplicate(arr, n, i + 1, i + 2);
        return;
    }

    if (arr[i] == arr[j])
        printf("Duplicate element found: %d\n", arr[i]);

    findDuplicate(arr, n, i, j + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicate(arr, n, 0, 1);

    return 0;
}