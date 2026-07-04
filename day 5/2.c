// arrays
//         To print minimum element from a given numbers //

#include <stdio.h>

int main() {
    
int numbers[6] = {5, 22, 8, 45, 12, 3};
    
   // its store a value 
 int min = numbers[0];
    
// by loop we compare a value to other value   
 for (int i = 1; i < 6; i++) {
        if (numbers[i] < min) {
            min = numbers[i]; 
        }
    }
    
   
    printf("minimum value is : %d\n", min);
    
    return 0;
}