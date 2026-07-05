// count words in string 
#include<stdio.h>
#include<string.h>

int main() {
    char str[150]; 
   
    int  len;    
        
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    
    len = strlen(str);

    printf(" There are %d words in given string. ",len);
    return 0;
}