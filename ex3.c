/* 3. Array Elements Access Using Pointers
Task: Write a program that:

Declares an array and uses a pointer to access each element in the array.
Prints each element using the pointer.
*/

#include <stdio.h>

int main() {
    
    int arr[] = {78, 21, 85, 4, 54};
    int *ptr = arr;

    for(int i=0;i<5;i++){
        printf("Element: %d \n",i,*(ptr+i));
    }
    return 0;
}