/* C program to find multiple palindromes in a string by avoiding repeatitive strings */
/* Author: Mehul Shah */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char* str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

void find_palindromes(char* str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (isPalindrome(str, i, j)) {
                // Print the palindrome substring
                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
                printf("\n");
                i=j;
                break;
            }
        }
    }
}

int main(void) {
    char str[] = "jkykjuftrbsbkbstt";
    find_palindromes(str);

    return 0;
} 
