// reverse 
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int *ptr = arr;                     

    printf("reverse : \n");
    
    for (int i = n - 1; i >= 0; i--) {
                printf("%d ",*(ptr+i)); 
    }
    
    printf("\n");
    return 0;
}