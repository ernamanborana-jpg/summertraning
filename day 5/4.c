// arrays
//         To print sum of element from a given numbers //

#include <stdio.h>

int main() {
    
int numbers[6] = {5, 22, 8, 45, 12, 3};
    
   
 int sum = numbers[0];
    
printf("reversed value : ");
 for (int i = 5; i >= 0; i--) {
 
          printf(" %d ",numbers[i]);
                             
         }
    
    return 0;
}
// second method

// arrays
//         To print reverse from a given numbers //

#include <stdio.h>

int main() {
    
int numbers[6] = {5, 22, 8, 45, 12, 3};
    
 printf("all value in reverse order : [ %d , %d , %d , %d , %d , %d]\n", numbers[5],numbers[4],numbers[3],numbers[2],numbers[1],numbers[0]);
        
    return 0;
}