//Khadija Rizvi
//2021B0101155
#include <stdio.h>
int main(){
    int A[3][3],B[3][3];
    printf("Matrix is :\n");
    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            scanf("%d" , &A[i][j]);
        }

    }
    
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
           B[j][i] = A[i][j];
        }
    }


  printf("Transpose of the matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
        printf("%d ",B[i][j]);  
        }
     printf("\n");
            }
  return 0 ;
}