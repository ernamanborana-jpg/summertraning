#include <stdio.h>
#include <math.h> 

int main() {
    double base, exponent, result;

    printf("Base number enter karein: ");
    scanf("%lf", &base);

    printf("Exponent (power) enter karein: ");
    scanf("%lf", &exponent);

   
    result = pow(base, exponent);

    printf("%.2lf ki power %.2lf = %.2lf\n", base, exponent, result);

    return 0;
}