// sum of  2 matrices
#include <stdio.h>
int main(){
  int  a[3][3],b[3][3],c[3][3],i,j;

  printf("----- values for 1st matrix ----- \n");

for ( i = 0; i < 3; i++)
  
{
    for ( j = 0; j < 3; j++)
    {
        printf(" values for place in matix : [%d]  [%d] ",i ,j );
        scanf("%d",&a[i][j]);
    }
    
}
  
  printf("------- values for 2nd matrix --------\n");
  
  for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        printf(" values for place in matix : [%d]  [%d] ",i ,j );
        scanf("%d",&b[i][j]);
    }
    
}

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
       c[i][j] = a[i][j] + b[i][j];
      
    }
    
}
  
printf(" ------- sum of matrix is ------- \n");

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
      printf(" %d ",c[i][j]);
      
    }
    printf("\n");
}
 return 0;
}
