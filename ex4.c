/*4. Dynamic Memory Allocation with Pointers
Task: Write a program that:

Dynamically allocates memory for an array of integers.
Takes user input to fill the array.
Prints the array elements using pointers.
Frees the allocated memory at the end.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the NO of Elements:");
    scanf("%d",&n);
    
    int *arr;
    arr= (int*)malloc(n*sizeof(int));

    printf("Enter %d Elements:",n);
    for (int i=0;i<n;i++){
       scanf("%d",arr+i);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    free(arr);
    return 0;

}