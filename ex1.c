/*1. Basic Pointer Declaration and Dereferencing
Task: Write a program that:

Declares an integer variable and a pointer to that integer.
Assigns a value to the integer.
Prints the value of the integer using the pointer.
*/

#include <stdio.h>
int main(){
    int number = 41;
    int *a;
    a = &number;

    printf("Value of Number is %d \n",number);
    printf("Value of Number using Pointer is %d \n",*a);
    return 0;
}