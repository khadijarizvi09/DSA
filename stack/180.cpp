#include <iostream>
using namespace std;
int A[3][3] = {1,2,3,4,5,6,7,8,9};
int B[3][3];
int C[3][3];
void transpose_of_matrix()
{
    int B[3][3];
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
        
            B[j][i] = A[i][j];
         
        }

 }
}
void exchange_of_transpose(){
    int t;
    for(int r = 0 ; r<3 ; r++)
    {
      int row = r;
      int i = 0;
      int j = 2;
    while(i<j)
    {
       t = B[row][i];
       B[row][i] = B[row][j];
       B[row][j] = t;
       i++;
       j--;
    }

  }
}
void transpose_of_90 ()
{
    int B[3][3];
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
        
            C[j][i] = B[i][j];
         
        }
}
void exchange_of_90transpose(){
    int t;

    for(int r = 0 ; r<3 ; r++)
    {
      int row = r;
      int i = 0;
      int j = 2;
      while(i<j)
      {
       t = C[row][i];
       C[row][i] = C[row][j];
       C[row][j] = t;
       i++;
       j--;
      }

    }
}

void printarray1()
for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
              cout<<B[i][j];
  }
        }
        cout<<endl;;
}
void printarray2()
for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
              cout<<C[i][j];
  }
        }
        cout<<endl;;
}
int main()
{
transpose_of_matrix();
exchange_of_transpose();
transpose_of_90();
exchange_of_90transpose();
printarray2();
return 0;  
}