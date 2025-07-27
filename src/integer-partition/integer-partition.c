#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int p(int n) {
    int *dp = malloc((n + 1) * sizeof(int));
    if (!dp) return -1; 
    memset(dp, 0, (n + 1) * sizeof(int));
    dp[0] = 1;
    for (int k = 1; k <= n; ++k) {
        for (int i = k; i <= n; ++i) {
            dp[i] += dp[i - k];
        }
    }
    int result = dp[n];
    free(dp);
    return result;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The number of partitions of %d is %d\n", number, p(number));
    return 0;
}
