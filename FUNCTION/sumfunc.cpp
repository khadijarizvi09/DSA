#include <iostream>
using namespace std ;
int sum(int n)
{
    for(int i = 1 ; i<=n ; i++)
    {
        int sum =0;
        sum = sum + i ;
        return sum;
    }
}
int main()
{
    int n;
    cin>>n;
   int s= sum(n);
   cout<<s;
}