#include <stdio.h>

int main() {

    char str[] = "programming";

    for (int i = 0; str[i] != '\0'; i++) {

        for (int j = 0; j < i; j++) {

            if (str[i] == str[j]) {
                printf("First repeating character: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.\n");

    return 0;
}
