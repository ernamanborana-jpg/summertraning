// largest using poiters
#include<stdio.h>
int main(){
int a , b, c ;

int *ptr1 = a ;
int *ptr2 = b ;
int *ptr3 = c ;
 printf("enter numbers to find max number : \n",a,b,c);
 scanf("%d%d%d",&a,&b,&c);

if (a>b)
{
    printf(" %d is largest ",a);
}
else if (b>c)
{
    printf(" %d is largest ",b);
}
else{
    printf(" %d is largest ",c);
}
    return 0;
}