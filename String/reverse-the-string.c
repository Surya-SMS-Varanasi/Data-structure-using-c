// Reverse a string
#include <stdio.h>
#include<stdlib.h>
int main() {
    // Write C code here
    char str[100];
    int size = 0, i=0;
    
    printf("Enter a string : ");
    gets(str);
    
    while(str[i] != '\0'){// finding the length of the string.
        size++;
        i++;
    }
    
    for(i = 0; i < size/2; i++){
        char temp = str[i];
        str[i]=str[size-1];
        str[size-1] = temp;
    }
    
    printf("Reversed string is : %s ", str);
    
    return 0;
}
