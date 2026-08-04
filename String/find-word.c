#include <stdio.h>
#include <ctype.h>

int main() {

    char sentence[200];
    int wordCount = 0;
    int inWord = 0;

    // Taking input
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Traversing the string
    for (int i = 0; sentence[i] != '\0'; i++) {

        // If current character is NOT whitespace
        if (!isspace(sentence[i])) {

            // If we were previously outside a word
            if (inWord == 0) {
                wordCount++;
                inWord = 1;
            }
        }

        // If current character IS whitespace
        else {
            inWord = 0;
        }
    }

    // Display result
    printf("Number of words = %d\n", wordCount);

    return 0;
}
