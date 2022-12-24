#include <iostream>
using namespace std ;
int volsphere(int r ,int a)
{
      int R= 1;
    for(int i = 1 ; i<=a ; i++)
    {
    
        R= R*a;
    
    }
    return R;
}
int main()
{
    int n;
    cin>>n;
    int a = 2;
   float  s=  4/3 * (3.14)* volsphere(n,a);
   cout<<s;
}