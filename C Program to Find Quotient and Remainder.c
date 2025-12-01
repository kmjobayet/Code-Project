#include <stdio.h>

int main() {
    int dividend, divisor;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);
    
    if (divisor != 0) {
        int quotient = dividend / divisor;
        int remainder = dividend % divisor;
        printf("Quotient: %d\n", quotient);
        printf("Remainder: %d\n", remainder);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    
    return 0;
}