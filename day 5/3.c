// arrays
//         To print sum of element from a given numbers //

#include <stdio.h>

int main() {
    
int numbers[6] = {5, 22, 8, 45, 12, 3};
    
   // its store a value 
 int sum = numbers[0];
    
// by loop we compare a value to other value   
 for (int i = 1; i < 6; i++) {
         (sum  = numbers[i] + sum) ;
            
        
    }
    
    printf("sum of all values is : %d\n", sum);
    
    return 0;
}