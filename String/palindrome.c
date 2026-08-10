#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    int j = 0;
    int palindrome = 1;

    // Find length of string
    while (str[j] != '\0') {
        j++;
    }

    j--;  // Last character

    // Compare from both ends
    while (i < j) {
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (palindrome)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");

    return 0;
}
