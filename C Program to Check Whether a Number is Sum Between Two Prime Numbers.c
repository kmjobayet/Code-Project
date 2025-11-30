#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0 && num > 2) {
        if (isSumOfTwoPrimes(num)) {
            printf("Yes, it can be expressed as sum of two primes.\n");
        } else {
            printf("No.\n");
        }
    } else {
        printf("Not applicable (odd or <=2).\n");
    }
    return 0;
}