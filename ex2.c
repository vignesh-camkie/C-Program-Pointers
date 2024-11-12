/*2. Swapping Two Numbers Using Pointers
Task: Write a program that:

Takes two integer variables.
Uses a function to swap the values of these integers using pointers.
*/

#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
