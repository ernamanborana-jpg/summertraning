// Reverse Number
#include<stdio.h>
int main(){

int n, reminder,reversed = 0;

printf("put a number to reverse : ");
scanf("%d",&n);

 while(n!=0){
     reminder = n%10;
     reversed =(reversed*10)+reminder;
     n=n/10;
}
    printf("reversed number : %d",reversed);

return 0;
}

