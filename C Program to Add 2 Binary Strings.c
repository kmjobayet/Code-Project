#include <stdio.h>
#include <string.h>

void addBinary(char a[], char b[], char result[]) {
    int i = strlen(a) - 1, j = strlen(b) - 1, k = 0, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    result[k] = '\0';
    // Reverse the result
    for (int l = 0; l < k / 2; l++) {
        char temp = result[l];
        result[l] = result[k - l - 1];
        result[k - l - 1] = temp;
    }
}

int main() {
    char a[100], b[100], result[101];
    printf("Enter first binary string: ");
    scanf("%s", a);
    printf("Enter second binary string: ");
    scanf("%s", b);
    addBinary(a, b, result);
    printf("Sum: %s\n", result);
    return 0;
}