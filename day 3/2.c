// max between two number
#include<stdio.h>
 
int findmax(int num1, int num2);
 int main() {  
 
    int number1, number2,max; 

    printf("Enter 1 value: ");
    scanf("%d", &number1);
    
    printf("Enter 2 value: ");
    scanf("%d", &number2);
    
    max = findmax( number1, number2);
    
     return 0;
}
     int findmax(int num1, int num2){
   
     if(num1>num2){
     printf("max number is %d  ",num1); 
    }

     else if(num2>num1){
      printf("max number is %d",num2); 
     }
     
     else{
           printf("both are equal number "); 
     }
         
     }