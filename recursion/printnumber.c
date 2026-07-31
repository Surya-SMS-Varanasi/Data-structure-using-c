#include <stdio.h>

void printNumbers(int current, int n)
{
    if (current > n)
        return;

    printf("%d ", current);

    printNumbers(current + 1, n);
}

int main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printNumbers(1, n);

    return 0;
}
