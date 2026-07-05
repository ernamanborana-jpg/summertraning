// lowercase to upper case 
#include <stdio.h>
#include<string.h>

int main() {
    char str[200]; 

    printf("write here to convert into uppercase: ");
    // %[^\n] se enter press karne tak ka poora sentence input ho jayega
    scanf(" %[^\n]", str); 

    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase Sentence: %s\n", str);
    return 0;
}