// swap using pointers
#include<stdio.h>
int main(){
int a,b;
int *ptr1 , *ptr2, temp;

printf("enter value of a = ");
scanf("%d",&a);

printf("enter value of b = ");
scanf("%d",&b);

printf(" Values before swaping : ");
printf("(%d,%d)\n",a,b);

ptr1 = &a;
ptr2 = &b;

temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
printf(" Values after swaping : ");
printf("(%d,%d)\n",a,b);
    return 0;
}
