#include <iostream>
using namespace std;
int main()
{
    int A[5][5][5];
    int i = 2;
    int j = 3;
    int k = 3;

    cout<<A[0][0]<<endl;
    cout<<&A[2][3][3]<<endl;
     int x = (i-0)*(4-0+1)*(4-0+1) +(j-0)*(4-0+1)+(k-0);
     cout<<x<<endl;
     cout<<A[0][0]+ x;
     return 0;
}