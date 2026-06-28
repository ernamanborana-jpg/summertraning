// swaping of 2 values

#include<stdio.h>
int main(){
   int a,b,temp;
    
    
    printf("value of a =  ",a);
    scanf("%d",&a);
  
    printf("value of b =  ",b);
    scanf("%d",&b);
     
    printf("\nvalues before swap\n");
     
    printf("values are a = %d, b = %d\n",a ,b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("\nvalues after swap \n a = %d, b = %d ",a , b);
    
    return 0;
}