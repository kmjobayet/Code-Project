#include <stdio.h>

int main() {
    float num;
    char str[50];
    
    printf("Enter a float: ");
    scanf("%f", &num);
    
    sprintf(str, "%.2f", num);  // Converts to string with 2 decimal places
    printf("String representation: %s\n", str);
    
    return 0;
}