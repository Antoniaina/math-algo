//
// Created by Toavina on 19/07/2025.
//
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int factorialSum(long int x) {
    int sum = 0;
    while (x > 0) {
        int digit = x % 10;
        sum += factorial(digit);
        x /= 10;
    }
    return sum;
}

int main() {
    long int number;
    printf("Enter a number: ");
    scanf("%ld", &number);
    printf("Digit factorial sum of %ld is %d\n", number, factorialSum(number));
    return 0;
}
