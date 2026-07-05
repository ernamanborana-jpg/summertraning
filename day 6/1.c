// count vowels in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[150];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
       
        char ch = str[i];
         
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        else if 
        
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
    }
    };
    printf("Total number of vowels: %d\n", count);

    return 0;
}