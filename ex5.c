/*Pointer to Pointer (Double Pointer)
Task: Write a program that:

Declares a pointer to a pointer.
Assigns values using the double pointer and prints them.
*/

#include <stdio.h>
int main(){
    float a = 2.0;
    float *b = &a;
    float **c = &b;

    printf("Value of a: %.2f\n",a);
    printf("Value using ptr: %.2f\n", *b);
    printf("Value using dptr: %.2f\n", **c); 
    
    return 0;
}