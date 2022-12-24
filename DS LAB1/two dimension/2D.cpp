#include <iostream>
using namespace std;
int main()
{
    int A[5][5];
    for(int i =0;i<5;i++){
        for(int j =0;j<5;j++){
            cin>>A[i][j];
        }

    }
    for(int i=0;i<5;i++){
        for(int j =0;j<5;j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }
    return 0;
}