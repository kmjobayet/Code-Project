#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;
    int n; // compounding frequency

    printf("Enter principal, rate (%%), time (years), and compounding frequency: ");
    scanf("%f %f %f %d", &principal, &rate, &time, &n);

    compoundInterest = principal * pow((1 + rate / (100 * n)), n * time) - principal;

    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
