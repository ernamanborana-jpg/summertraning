// program to print string in revese order
#include<stdio.h>
#include<string.h>

int main(){
 
  char str[150];
  int len ,i;

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    len = strlen(str);

    printf("reversed string is : ");
 
    for( i = len-1; i >= 0; i--)
    {
         printf("%c",str[i]);
   
    }
printf("\n");

    return 0;
}