#include <stdio.h>

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";

    int i = 0;
    int j = 0;

    // Find the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Copy str2 at the end of str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add null character
    str1[i] = '\0';

    printf("Concatenated string: %s", str1);

    return 0;
}
