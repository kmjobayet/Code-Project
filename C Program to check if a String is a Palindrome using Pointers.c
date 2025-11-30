#include <stdio.h>
#include <string.h>

int isPalindrome(char* str) {
    char* start = str;
    char* end = str + strlen(str) - 1;
    while (start < end) {
        if (*start != *end) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[] = "radar";
    if (isPalindrome(str)) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}