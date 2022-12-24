#include <iostream>
using namespace std;
int main(){
    int A[3][3],B[3][3],C[3][3];
    for (int i = 0;i<3;i++){
        for(int j = 0 ; j<3;j++){
            cin>>A[i][j];

        }
      }
       for (int i = 0;i<3;i++){
        for(int j = 0 ; j<3;j++){
            cin>>B[i][j];

        }

       } 
         for (int i = 0;i<3;i++){
        for(int j = 0 ; j<3;j++){
            cout<<A[i][j];

        }
        cout<<endl;
     }
         for (int i = 0;i<3;i++){
        for(int j = 0 ; j<3;j++){
            cout<<B[i][j];

        }
        cout<<endl;
         }
        
     for (int i = 0;i<3;i++){
        for(int j = 0 ; j<3;j++){
            int sum=0;
           for(int k =0 ;k<3;k++){
        sum = A[i][k] * B[k][j];
        sum++;

         }
  C[i][j] = sum;
        }
     }
     for(int i = 0 ; i < 3 ; i++){
     for(int j = 0 ; j<3;j++){
     cout<<C[i][j];
      }
      cout<<endl;
     }
     return 0;
}