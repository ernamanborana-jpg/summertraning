// pointers
// print address
#include<stdio.h>

int main(){
int num ;
int *ptr = &num;

printf("enter number = ");  
scanf("%d",&num);  
printf("address of number = %p\n",(void*)ptr);

    return 0;
}