// simple intrest 

#include<stdio.h>
int main(){
    int p,t,r, si;
    
    printf("price =  ",p);
    scanf("%d",&p);
    
    printf("time = ",t); 
    scanf("%d",&t);
    
    printf("rate= ",r); 
    scanf("%d",&r);
    
    si  = (p*t*r)/100;
    
    printf("area for this rectangle = %d ",si);
    
    return 0;
}