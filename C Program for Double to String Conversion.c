#include <stdio.h>

int main() {
    double num;
    char str[50];
    
    printf("Enter a double: ");
    scanf("%lf", &num);
    
    sprintf(str, "%.6f", num);  // Converts to string with 6 decimal places
    printf("String representation: %s\n", str);
    
    return 0;
}