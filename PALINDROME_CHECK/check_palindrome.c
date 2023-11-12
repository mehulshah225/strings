/* C code to check if a string is palindrome or not */
/* Author: Mehul Shah */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// C function to check palindrome
void palindrome_check(char* str){
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    for(int i = 0; start < end; i++){
        if(*(str + start) == *(str + end)){
            start++;
            end--;
        }
        else{
            printf("Not a palindrome");
            exit(1);
        }
    }
    printf("Its a palindrome");
}

int main() {
    char str[] = "wuiukuiuw";
    palindrome_check(str);

    return 0;
}
