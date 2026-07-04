// arrays
//         To print max element from a given numbers //

#include <stdio.h>

int main() {
    
int numbers[6] = {5, 22, 8, 45, 12, 3};
    
   // its store a value 
 int max = numbers[0];
    
// by loop we compare a value to other value   
 for (int i = 1; i < 6; i++) {
        if (numbers[i] > max) {
            max = numbers[i]; 
        }
    }
    
   
    printf("max value : %d\n", max);
    
    return 0;
}