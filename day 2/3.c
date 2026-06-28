// largest between 3 numbers
#include <stdio.h>
int main() {
int  a,b,c;    
printf("a  = ");
scanf("%d",&a);
 
 printf("b  = ");
scanf("%d",&b);

printf("c  = ");
scanf("%d",&c);

printf(" a = %d , b = %d , c = %d \n",a,b,c);

if(a >= b && a>=c){
    printf(" largest no is A = %d\n",a);
}
else if(b >= a && b>=c){
printf("largest no is B = %d\n",b);
}
else {
    printf("largest no is C = %d\n",c);
}   return 0;
}