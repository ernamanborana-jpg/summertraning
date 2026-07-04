// count digit
//count digit
#include<stdio.h>
int main(){

int n,i=0;

printf("N = ");
scanf("%d",&n);
if(n == 0){
    printf("total digits are : 1");
}
else{
while(n != 0){
    n=n/10;
    i++;
}
printf("total digits are : %d", i);
}
return 0;
}

