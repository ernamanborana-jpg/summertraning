// factorial 
#include <stdio.h>

int findFactorial(int n) {
    int factorial = 1;

   
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i; 
    }

    return factorial; 

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = findFactorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}