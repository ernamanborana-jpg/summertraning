// sum of array using pointers
#include<stdio.h>
int main(){

int arr[] = {1,2,3};
int size = sizeof(arr)/sizeof(arr[0]);
int sum = 0;
 int *ptr = arr;

 for(int i=0;i < size;i++){
    sum += *ptr;
    ptr++;
 }
printf("sum of elements of array = %d",sum);
    return 0;
}
