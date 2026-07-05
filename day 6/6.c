#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int count[256] = {0}; 

    printf("Enter first string: ");
    scanf(" %[^\n]", str1); 

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);  


    for (int i = 0; str1[i] != '\0'; i++) count[(unsigned char)str1[i]]++;
    for (int i = 0; str2[i] != '\0'; i++) count[(unsigned char)str2[i]]--;

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not an Anagram\n");
            return 0;
        }
    }
    printf("Strings are Anagrams\n");
    return 0;
}