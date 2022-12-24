#include <iostream>
using namespace std;
int main()
{
    int A[5][5];
    int i = 2;
    int j = 3;
    cout<<A[0]<<endl;
    cout<<&A[2][3]<<endl;
     int x = (i-0)*(4-0+1)+(j-0);
     cout<<x<<endl;
     cout<<A[0] + x;
     return 0;
}