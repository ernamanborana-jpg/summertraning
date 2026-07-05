#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0}; // 1. एक खाली बॉक्स बनाया

    printf("Enter first string: ");
    scanf(" %[^\n]", str1); 

    printf("Enter second string: ");
    scanf(" %[^\n]", str2); 


    // 2. दोनों शब्दों के अक्षरों को इसमें नाप लिया
    for (int i = 0; str1[i] != '\0'; i++) count[(unsigned char)str1[i]]++;
    for (int i = 0; str2[i] != '\0'; i++) count[(unsigned char)str2[i]]--;

    // 3. चेक किया कि सब बराबर (0) हुआ या नहीं
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not an Anagram\n");
            return 0; // अगर गड़बड़ है तो यहीं रोक दो
        }
    }

    printf("Strings are Anagrams\n");
    return 0;
}