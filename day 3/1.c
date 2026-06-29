// sum of two variable 
#include<stdio.h>
int sumof2(int num1, int num2);
int main() {  
    int number1, number2; 
    int sum;
    
    printf("Enter 1 value: ");
    scanf("%d", &number1);
    
    printf("Enter 2 value: ");
    scanf("%d", &number2);
    
    sum = sumof2( number1, number2);
    printf("Sum = %d", sum);
    return 0;
}
int sumof2(int num1, int num2){
    int result;
    result = num1 + num2;
    return result;
}   