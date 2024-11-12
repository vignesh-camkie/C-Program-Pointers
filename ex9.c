/*Copying a String Using Pointers
Task: Write a function that takes two character pointers (char *src and char *dest) 
and copies the string from src to dest using pointers.
Hint: Use a loop to copy each character from src to dest, 
and don't forget to add the null terminator at the end.*/

#include <stdio.h>

void string_copy(char *source, char *Dest) {
    // Loop through the source string and copy each character to Dest
    while (*source != '\0') {
        *Dest = *source; // Copy the character
        source++;        // Move to the next character in the source
        Dest++;          // Move to the next position in the destination
    }
    *Dest = '\0'; // Null-terminate the destination string
}

int main() {
    char source[] = "Juice WRLD"; // Source string
    char Dest[20];                // Destination array
    string_copy(source, Dest);    // Copying the string
    printf("Destination is: %s \n", Dest); // Print the copied string
    return 0;
}
