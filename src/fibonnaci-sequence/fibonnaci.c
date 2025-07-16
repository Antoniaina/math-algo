//
// Created by Toavina on 16/07/2025.
//
#include <stdio.h>

int fibonnaci(int n) {
    if (n == 0) {return 0;}
    if (n <= 1) {return 1; }
return fibonnaci(n - 1) + fibonnaci(n - 2);
}
int main() {
    for (int i = 0; i <= 10; i++) {
printf("%d\n", fibonnaci(i));}
return 0;
}
