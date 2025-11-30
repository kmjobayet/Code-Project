#include <stdio.h>

int main() {
    int low, high, isPrime;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    
    printf("Prime numbers between %d and %d:\n", low, high);
    
    for (int num = low; num <= high; num++) {
        isPrime = 1;
        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    
    return 0;
}