#include <stdio.h>

int main() {

    char str[200];
    int frequency[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    // Display frequency
    printf("\nCharacter frequencies:\n");

    for (int i = 0; i < 256; i++) {

        if (frequency[i] > 0 && i != '\n') {
            printf("'%c' = %d\n", i, frequency[i]);
        }
    }

    return 0;
}
