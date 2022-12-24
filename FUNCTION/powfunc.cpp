#include <iostream>
using namespace std ;
int pow(int n , int a )
{
      int k = 1;
    for(int i = 1 ; i<=a ; i++)
    {
    
        k= k*n;
    
    }
    return k;
}
int main()
{
    int n;
    cin>>n;
    int a=2;
   int s= pow(n,a);
   cout<<s;
}