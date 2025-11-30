#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;
    
    printf("Armstrong numbers between 1 and 1000:\n");
    
    for (int i = 1; i <= 1000; i++) {
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