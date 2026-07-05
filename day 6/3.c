// program of palindrome or not ?
#include<stdio.h>
#include<string.h>

int main() {
    char str[150]; 
    char rev[150]; 
    int i, len;    
    int j = 0;     

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    printf("reversed string is : ");
    
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
        rev[j] = str[i];        j++;
    }
    rev[j] = '\0'; 
    printf("\n");

    if ((str, rev) != 0) {
        printf("it is not an example of palindrome \n");
    } else {
        printf("it is an example of palindrome \n");
    }
    return 0;
}