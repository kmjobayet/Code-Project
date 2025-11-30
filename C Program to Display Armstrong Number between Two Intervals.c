#include <stdio.h>
#include <math.h>

int main() {
    int low, high, num, originalNum, remainder, n = 0, result = 0;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    
    printf("Armstrong numbers between %d and %d:\n", low, high);
    
    for (int i = low; i <= high; i++) {
        num = i;
        originalNum = num;
        n = 0;
        result = 0;
        
        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }
        
        originalNum = num;
        
        // Calculate Armstrong
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        
        if (result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    
    return 0;
}