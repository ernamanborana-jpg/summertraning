// grade calculator
#include <stdio.h>

int main() {
    
int  mark,a,b,c,fail;    

printf("mark  = ");
scanf("%d",&mark);
 
if(mark >= 90){
    printf(" Grade  A\n");
}
else if(mark >= 60){
printf("Grade B\n");
}
else if(mark >= 33){
    printf("Grade C\n");
}
else{
    printf("you are fail\n");
}    
    return 0;
}