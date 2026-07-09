#include <stdio.h>
#include <string.h> 

int main() {
    char str[100];

    printf("Koi string enter karein: ");
    
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = 0;

    strrev(str);

    printf("Reversed string hai: %s\n", str);

    return 0;
}