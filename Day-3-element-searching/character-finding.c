#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int size, i;
    char key;
    bool isFound = false;

    printf("Enter the size of the character array : ");
    scanf("%d", &size);

    char *arr = malloc(size * sizeof(char));

    if(arr == NULL)
    {
        printf("Memory allocation failed!");
        return 0;
    }

    printf("Enter %d characters:\n", size);

    for(i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);
    }

    printf("\nArray = [ ");

    for(i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }

    printf("]\n");

    printf("Enter the character to search : ");
    scanf(" %c", &key);

    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            isFound = true;
            break;
        }
    }

    if(isFound)
    {
        printf("%c found at index %d\n", key, i);
    }
    else
    {
        printf("%c not found in the array.\n", key);
    }

    free(arr);

    return 0;
}
