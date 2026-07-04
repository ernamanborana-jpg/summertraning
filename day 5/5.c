// program to print second largest number
#include <stdio.h>
int main() {
    int numbers[6] = {5, 22, 8, 45, 12, 3};
    
    // Shuruat me pehle number ko hi sabse bada maan liya
    int max = numbers[0]; 
    int second_max = 1; 

    // ab Loop 2nd number se check karna shuru karega
    for (int i = 1; i < 6; i++) {
        
        // Agar koi number max se bhi bada mil jaye to 
        if (numbers[i] > max) {
            second_max = max;      // Purana sabse bada ab second ban gaya
            max = numbers[i];      // Naya number sabse bada (max) ban gaya
        }
        // Agar naya number max se chhota hai par second_max se bada hai
        else if (numbers[i] > second_max) {
            second_max = numbers[i]; // Tb second_max ban gaya
        }
    }

    //  ab yha enko print kar diya
    printf("Largest Number is = %d\n", max);
    printf("Second Largest Number is = %d\n", second_max);

    return 0;
}
