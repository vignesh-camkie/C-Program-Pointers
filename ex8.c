// Using pointers()

#include <stdio.h>
int reverse_string(char *artist){
    int length = 0;
    while (*artist != '\0'){
        length++;
        artist++;
    }
    return length;
}
int main(){
    char artist [] ={"Juice WRLD"};
    int length;
    length = reverse_string(artist);
    printf("Length Of the String is:%d \n",length);
    return 0;
}