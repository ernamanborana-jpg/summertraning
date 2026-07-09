#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    printf("Koi number enter karein: ");
    scanf("%d", &num);

    originalNum = num; 
    
    while (num != 0) {
        remainder = num % 10;                   
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                                }

       if (originalNum == reversedNum) {
        printf("%d Palindrome hai! \n", originalNum);
    } else {
        printf("%d Palindrome nahi hai. \n", originalNum);
    }

    return 0;
}