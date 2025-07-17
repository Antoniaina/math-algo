//
// Created by Toavina on 17/07/2025.
//
#include <math.h>
#include <stdio.h>

int primeChecker(long int x) {
    if (x <= 1) return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long int x;
    printf("Enter your number: ");
    scanf("%ld", &x);

    if (primeChecker(x)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
