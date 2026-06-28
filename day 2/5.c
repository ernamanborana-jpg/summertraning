// positive , negative , zero
#include <stdio.h>
int main() {
float  a,b;    
char operator;

printf("enter an operator (+,-,*,/)  ");
scanf("%c",&operator);

printf("a  = ");
scanf("%d",&a); 

printf("b  = ");
scanf("%d",&a);
 
switch (operator) {

case '+' :
printf(" result = %f + %f \n ,a,b,a+b");
break;

case '-' :
printf(" result = %f - %f \n ,a,b,a-b");
break;

case '*' :
printf(" result = %f * %f \n ,a,b,a*b");
break;

case '/' :
 if(a = 0){
  printf(" result = %f / %f \n ,a,b,a/b");
}
else{
    printf("error can not not divisible by 0  ");
}
break;
 default : printf("select a valid operator");
}
return 0;
}