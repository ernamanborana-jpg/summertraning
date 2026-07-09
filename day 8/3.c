#include <stdio.h>

int main() {
    unsigned long long n, sum;

    printf("N ki value enter karein: ");
    scanf("%llu", &n);

    // Formula: n * (n + 1) / 2
    sum = (n * (n + 1)) / 2;

    printf("1 se lekar %llu tak ka sum hai: %llu\n", n, sum);

    return 0;
}