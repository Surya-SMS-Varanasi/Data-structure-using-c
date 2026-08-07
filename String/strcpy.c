#include <stdio.h>

int main() {
    char source[] = "Hello World";
    char destination[50];

    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';  // Add null character

    printf("Source      : %s\n", source);
    printf("Destination : %s\n", destination);

    return 0;
}
