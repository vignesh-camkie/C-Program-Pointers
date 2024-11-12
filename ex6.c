/*1. Pointer Arithmetic
Task: Write a program that:
Declares an integer array with values.
Uses a pointer to access each element of the array by incrementing the pointer.
Prints each element along with the memory address.
Hint: Use pointer arithmetic to move the pointer from one element to the next.*/

#include <stdio.h>

int main() {
    int numbers[] = {24, 25, 43, 784, 545};
    int *ptr = numbers;
    for(int i=0;i<5;i++){
        printf("Element %d and it's Address %p is \n",*(ptr+i),(void*)(ptr+i));
    }
    return 0;
}