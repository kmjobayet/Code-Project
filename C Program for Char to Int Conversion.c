#include <stdio.h>

int main() {
    char ch;
    int num;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c to handle newline
    
    num = (int)ch;
    printf("ASCII value: %d\n", num);
    
    return 0;
}