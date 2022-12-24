#include <iostream>
using namespace std;
int main(){
    int A[3][3],B[3][3];
    int i ,j ,row ,r,t;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>A[i][j];
        }

    }
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
              cout<<A[i][j];
  }
  cout<<endl;
        }
        


 for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
        
            B[j][i] = A[i][j];
         
        
        }
 }
 
  for(r = 0 ; r<3 ; r++)
  {
    row = r;
    i = 0;
    j = 2;
    while(i<j)
    {
       t = B[row][i];
       B[row][i] = B[row][j];
       B[row][j] = t;
       i++;
       j--;
    }

  }
  for(int i = 0 ; i<3 ; i++)
  {
    for(int j = 0 ; j<3 ; j++)
    {
        cout<<B[i][j]<<" ";
    }
    cout<<endl;
  }
  
 }